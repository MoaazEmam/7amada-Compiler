# Simple Programming Language Compiler

[cite_start]A custom compiler front-end built using Lex and Yacc (Flex/Bison) that translates a unique programming language into intermediate quadruples. [cite: 248]

## Project Overview
[cite_start]This project implements the front-end of a compiler for a custom language, covering lexical, syntax, and semantic analysis. [cite: 256, 257] The language supports:
- [cite_start]**Data Types**: int, float, bool, string, and void. [cite: 260]
- [cite_start]**Structures**: Variable/constant declarations, arithmetic/logical expressions, if-else, while, for, repeat-until, and switch-case statements. [cite: 261, 262, 263, 264, 265]
- [cite_start]**Functions**: Parameterized functions and recursion. [cite: 266]

## Language Symbols (Tokens)
[cite_start]The lexer recognizes the following custom keywords and symbols: [cite: 237]

| Category | Tokens / Keywords | Description |
| :--- | :--- | :--- |
| **Data Types** | `int`, `float`, `bool`, `string`, `wala_haga` (void) | [cite_start]Standard types and custom void. [cite: 237] |
| **Conditionals** | `Law` (If), `Tayeb` (Else) | [cite_start]Conditional flow. [cite: 237] |
| **Loops** | `Karar` (For), `Tol_ma` (While), `E3mel...Lehad` (Repeat-Until) | [cite_start]Iterative constructs. [cite: 237] |
| **Logical** | `And`, `Or`, `Not` | [cite_start]Boolean logic. [cite: 237] |
| **Constants** | `3la_wad3o` | [cite_start]Keyword for constant variables. [cite: 237] |
| **Returns** | `Raga3` | [cite_start]Function return keyword. [cite: 237] |

## Intermediate Representation (Quadruples)
[cite_start]The compiler generates quadruples in the format: `(Operator, Operand 1, Operand 2, Result)`. [cite: 240]

| Operator | Function | Description |
| :--- | :--- | :--- |
| `+`, `-`, `*`, `/` | Arithmetic | [cite_start]Standard math operations. [cite: 240] |
| `==`, `!=`, `>`, `<` | Comparison | [cite_start]Logical comparison instructions. [cite: 240] |
| `iftrue`, `iffalse` | Control Flow | [cite_start]Conditional jumps based on satisfied conditions. [cite: 240] |
| `goto` | Control Flow | [cite_start]Unconditional jump to a label. [cite: 240] |
| `call`, `func` | Functions | [cite_start]Function declaration and execution. [cite: 240] |

## GUI Components
- [cite_start]**Error Log**: Real-time syntax and semantic error reporting. [cite: 314]
- [cite_start]**Symbol Table**: Visualization of identifiers, types, and scopes. [cite: 314]
- [cite_start]**Quadruples**: View of the generated intermediate code. [cite: 314]
