#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quadruple.h"

/* Quadruple table */
static Quadruple *quadTable = NULL;
static int quadCount = 0;
static int quadCapacity = 0;

/* Temporary variable counter */
static int tempCount = 0;

/* Initialize quad table */
void initQuadTable() {
    quadTable = NULL;
    quadCount = 0;
    quadCapacity = 0;
    tempCount = 0;
}

/* Return index of next quadruple */
int nextQuad() {
    return quadCount;
}

void addjump(int quadIndex, int target) {
    char label[20];
    sprintf(label, "%d", target);
    strcpy(quadTable[quadIndex].result,label);
}

/* Emit a new quadruple */
void emit(char *op, char *arg1, char *arg2, char *result) {
    if (quadCount == quadCapacity) {
        quadCapacity = (quadCapacity == 0) ? 10 : quadCapacity * 2;

        Quadruple *temp = realloc(
            quadTable,
            quadCapacity * sizeof(Quadruple)
        );

        if (!temp) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }

        quadTable = temp;
    }
    if (strcmp(arg1, "error") == 0 || strcmp(arg2, "error") == 0 || strcmp(result, "error") == 0) {
       return;
    }

    strcpy(quadTable[quadCount].op, op);
    strcpy(quadTable[quadCount].arg1, arg1);
    strcpy(quadTable[quadCount].arg2, arg2);
    strcpy(quadTable[quadCount].result, result);

    quadCount++;
}

/* Generate a new temporary variable */
char* newTemp() {
    char *temp = malloc(16);
    if (!temp) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    sprintf(temp, "t%d", tempCount++);
    return temp;
}

void printQuadruples() {
    printf("\n------------------------------- Quadruple Table -------------------------------\n");
    printf("| %-4s | %-10s | %-10s | %-10s | %-10s |\n",
           "No", "Op", "Arg1", "Arg2", "Result");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < quadCount; i++) {
        printf("| %-4d | %-10s | %-10s | %-10s | %-10s |\n",
               i,
               quadTable[i].op     ? quadTable[i].op     : "",
               quadTable[i].arg1   ? quadTable[i].arg1   : "",
               quadTable[i].arg2   ? quadTable[i].arg2   : "",
               quadTable[i].result ? quadTable[i].result : ""
        );
    }

    printf("-------------------------------------------------------------------------------\n");
}

