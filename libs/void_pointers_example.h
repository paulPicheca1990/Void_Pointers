#ifndef __VOID_POINTERS_EXAMPLES_H__
#define __VOID_POINTERS_EXAMPLES_H__

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef void (* voidfunc)(void);

void foo(void);

void bar(void);

void quux(void);

void *find_item(char *name, char *names[], void *items, int item_size, int item_count);

#endif //__VOID_POINTERS_EXAMPLES_H__