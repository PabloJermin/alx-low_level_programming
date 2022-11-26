#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a function that prints the list provode in a function
 * @list_t : an argument to the function
 * @h : an argument pointer to the function
 * Return : always true
 */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
	list_t *temp = h;

	while (temp != NULL)
	{
		printf("%d", temp -> list_t);
	}
	else
		printf("nil");
	return (temp);
}
