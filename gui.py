import tkinter as tk
from tkinter import ttk, messagebox
import subprocess
import tempfile
import os
def update_line_numbers(event=None):
    line_numbers.config(state="normal")
    line_numbers.delete("1.0", tk.END)

    lines = source_text.index("end-1c").split('.')[0]
    for i in range(1, int(lines) + 1):
        line_numbers.insert(tk.END, f"{i}\n")

    line_numbers.config(state="disabled")

# ---------- Compile Function ----------
def compile_code():
    source = source_text.get("1.0", tk.END).strip()
    if not source:
        messagebox.showwarning("Empty", "Please enter source code")
        return

    # write code to temp file
    with tempfile.NamedTemporaryFile(delete=False, suffix=".txt", mode="w") as f:
        f.write(source)
        filename = f.name

    try:
        result = subprocess.run(
            ["compiler.exe", filename],
            capture_output=True,
            text=True
        )

        stdout = result.stdout
        stderr = result.stderr

        # Clear previous output
        error_text.delete("1.0", tk.END)
        symbol_text.delete("1.0", tk.END)
        quad_text.delete("1.0", tk.END)

        # Errors
        error_text.insert(tk.END, stderr if stderr else "No errors.\n")

        # Split output sections
        if "===== SYMBOL TABLE =====" in stdout:
            before, rest = stdout.split("===== SYMBOL TABLE =====", 1)
            symbols, quads = rest.split("===== QUADRUPLES =====", 1)

            symbol_text.insert(tk.END, symbols.strip())
            quad_text.insert(tk.END, quads.strip())
        else:
            quad_text.insert(tk.END, stdout)

    except Exception as e:
        messagebox.showerror("Execution Error", str(e))

    finally:
        os.remove(filename)

# ---------- GUI ----------
root = tk.Tk()
root.title("CMPN403 Mini Compiler")

# ---------- Source Code with Line Numbers ----------
tk.Label(root, text="Source Code").pack(anchor="w", padx=5)

code_frame = tk.Frame(root)
code_frame.pack(fill="both", expand=False, padx=5, pady=5)

line_numbers = tk.Text(
    code_frame,
    width=4,
    padx=5,
    takefocus=0,
    border=0,
    background="lightgray",
    state="disabled"
)
line_numbers.pack(side="left", fill="y")

source_text = tk.Text(code_frame, height=15, width=95)
source_text.pack(side="right", fill="both", expand=True)

source_text.insert("1.0", "")

source_text.bind("<KeyRelease>", update_line_numbers)
source_text.bind("<MouseWheel>", update_line_numbers)
source_text.bind("<Button-1>", update_line_numbers)

update_line_numbers()

scrollbar = tk.Scrollbar(code_frame, command=lambda *args: sync_scroll(*args))
scrollbar.pack(side="right", fill="y")

source_text.config(yscrollcommand=scrollbar.set)
line_numbers.config(yscrollcommand=scrollbar.set)

def sync_scroll(*args):
    source_text.yview(*args)
    line_numbers.yview(*args)

# ---------- Compile Button ----------
button_frame = tk.Frame(root)
button_frame.pack(pady=5)

tk.Button(button_frame, text="Compile", command=compile_code).pack(side="left", padx=5)

# 👇 ADD THIS LINE HERE
tk.Button(
    button_frame,
    text="Clear",
    command=lambda: source_text.delete("1.0", tk.END)
).pack(side="left", padx=5)

# ---------- Tabs ----------
notebook = ttk.Notebook(root)
notebook.pack(fill="both", expand=True)

# Errors Tab
error_frame = ttk.Frame(notebook)
error_text = tk.Text(error_frame, height=15)
error_text.pack(fill="both", expand=True)
notebook.add(error_frame, text="Errors")

# Symbol Table Tab
symbol_frame = ttk.Frame(notebook)
symbol_text = tk.Text(symbol_frame)
symbol_text.pack(fill="both", expand=True)
notebook.add(symbol_frame, text="Symbol Table")

# Quadruples Tab
quad_frame = ttk.Frame(notebook)
quad_text = tk.Text(quad_frame)
quad_text.pack(fill="both", expand=True)
notebook.add(quad_frame, text="Quadruples")

root.mainloop()
