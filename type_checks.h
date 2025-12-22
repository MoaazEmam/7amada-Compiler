#ifndef TYPE_CHECKS_H
#define TYPE_CHECKS_H
#include <stdbool.h>
#include "enums_def.h"

bool type_compatible(DATATYPE lhs, DATATYPE rhs);
const char *type_name(DATATYPE t);

#endif
