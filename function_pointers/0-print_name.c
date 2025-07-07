#include <stdio.h>
#include "function_pointers.h"

void name_print(char *example)
{
    printf("%s",example);
}

void print_name(char *name, void (*f)(char *))
{
    f(name);
}