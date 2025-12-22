#ifndef ENUMS_DEF_H
#define ENUMS_DEF_H

// enum definitions here

typedef enum
{
    SYM_INT,
    SYM_FLOAT,
    SYM_BOOL,
    SYM_STRING,
    SYM_VOID,
    SYM_ERROR
} DATATYPE;

typedef enum
{
    VAR,
    FUNC,
    SYM_CONST
} KIND;

#endif