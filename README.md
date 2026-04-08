# Simple Programming Language Compiler

A custom compiler front-end built using Lex and Yacc (Flex/Bison) that translates a unique programming language into intermediate quadruples. 

## Project Overview
This project implements the front-end of a compiler for a custom language, covering lexical, syntax, and semantic analysis. The language supports:
- **Data Types**: int, float, bool, string, and void. 
- **Structures**: Variable/constant declarations, arithmetic/logical expressions, if-else, while, for, repeat-until, and switch-case statements. 
- **Functions**: Parameterized functions and recursion.

## Language Symbols (Tokens)
The lexer recognizes the following custom keywords and symbols: 

| Category | Tokens / Keywords | Description |
| :--- | :--- | :--- |
| **Data Types** | `int`, `float`, `bool`, `string`, `wala_haga` (void) | Standard types and custom void. |
| **Conditionals** | `Law` (If), `Tayeb` (Else) | Conditional flow. |
| **Loops** | `Karar` (For), `Tol_ma` (While), `E3mel...Lehad` (Repeat-Until) | Iterative constructs. |
| **Logical** | `And`, `Or`, `Not` | Boolean logic.  |
| **Constants** | `3la_wad3o` | Keyword for constant variables. |
| **Returns** | `Raga3` | Function return keyword. |

## Intermediate Representation (Quadruples)
The compiler generates quadruples in the format: `(Operator, Operand 1, Operand 2, Result)`.

| Operator | Function | Description |
| :--- | :--- | :--- |
| `+`, `-`, `*`, `/` | Arithmetic | Standard math operations. |
| `==`, `!=`, `>`, `<` | Comparison | Logical comparison instructions. |
| `iftrue`, `iffalse` | Control Flow | Conditional jumps based on satisfied conditions. |
| `goto` | Control Flow | Unconditional jump to a label. |
| `call`, `func` | Functions | Function declaration and execution. |

## GUI Components
- **Error Log**: Real-time syntax and semantic error reporting. 
- **Symbol Table**: Visualization of identifiers, types, and scopes. 
- **Quadruples**: View of the generated intermediate code. 
