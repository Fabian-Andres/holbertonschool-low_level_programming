#ifndef LIST
#define LIST
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - structure of linked list.
 *
 * @str: string of the structure
 * @len: length of the structure
 * @next: next position of the structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
