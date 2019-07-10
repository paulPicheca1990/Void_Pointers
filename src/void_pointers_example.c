#include "../libs/void_pointers_example.h"

void foo(void)
{
    puts("foo");
}

void bar(void)
{
    puts("bar");
}

void quux(void)
{
    puts("quux");
}

void *find_item(char *name, char *names[], void *items, int item_size, int item_count)
{
  int i;

  for (i = 0; i < item_count; i++) {
    if (strcmp(name, names[i]) == 0) {
      return (char*)items + i * item_size;
    }
  }
  return NULL;
}