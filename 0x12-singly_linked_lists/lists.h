#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: strin - (malloced string)
 * @len: length of the string
 * @next: points to next node
 *
 * Description: singly linked list ALX
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
