#include <stdbool.h>
#include "type_checks.h"

bool type_compatible(DATATYPE lhs, DATATYPE rhs)
{
    if (lhs == rhs)
        return true;
    if ((lhs == SYM_FLOAT && rhs == SYM_INT) || (lhs == SYM_INT && rhs == SYM_FLOAT))
        return true;
    return false;
}

const char *type_name(DATATYPE t)
{
    switch (t)
    {
    case SYM_INT:
        return "int";
    case SYM_FLOAT:
        return "float";
    case SYM_BOOL:
        return "bool";
    case SYM_STRING:
        return "string";
    case SYM_VOID:
        return "void";
    default:
        return "unknown";
    }
}
