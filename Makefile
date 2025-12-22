all:
	bison -d -v Parser.y
	bison --yacc Parser.y -d
	flex Lexer.l
	gcc y.tab.c lex.yy.c param.c symbol.c symbol_table.c type_checks.c quadruple.c