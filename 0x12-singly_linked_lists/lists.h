#ifndef LIST
#define LIST

#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - Struct list of string
 * @str: a string
 * @len: Length
 * @age: float
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);





#endif 