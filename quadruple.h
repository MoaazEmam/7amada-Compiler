#ifndef QUADRUPLE_H
#define QUADRUPLE_H

#define MAX_FIELD_LEN 32

/* Quadruple structure */
typedef struct {
    char op[MAX_FIELD_LEN];
    char arg1[MAX_FIELD_LEN];
    char arg2[MAX_FIELD_LEN];
    char result[MAX_FIELD_LEN];
} Quadruple;

/* Quadruple table */
void initQuadTable();
void emit(char *op, char *arg1, char *arg2, char *result);
int  nextQuad();
void printQuadruples();
void addjump(int quadIndex, int target);

/* Temporary variable */
char* newTemp();

#endif
