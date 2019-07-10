#include <stdio.h>
#include "./libs/void_pointers_example.h"

int main() {
  voidfunc ptr_list[] = {foo, bar, quux};
  char *name_list[] = {"foo", "bar", "quux"};
  
  voidfunc fptr;

  fptr = 
    *(voidfunc*) 
    find_item("quux", 
              name_list, 
              ptr_list,
              sizeof(ptr_list[0]),
              sizeof(ptr_list) / sizeof(ptr_list[0]) );

  fptr();

  return 0;
}