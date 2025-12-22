import tkinter as tk
from tkinter import ttk, messagebox
import subprocess
import tempfile
import os

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
            ["./compiler", filename],
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

# ---------- Source Code ----------
tk.Label(root, text="Source Code").pack(anchor="w", padx=5)
source_text = tk.Text(root, height=15, width=100)
source_text.pack(padx=5, pady=5)

# ---------- Compile Button ----------
tk.Button(root, text="Compile", command=compile_code).pack(pady=5)

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
