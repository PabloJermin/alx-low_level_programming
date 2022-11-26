#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a function that prints the list provode in a function
 * @list_t : an argument to the function
 * @h : an argument pointer to the function
 * Return : always true
 */
size_t print_list(const list_t *h)
{
	size_t tem;
	tem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		tem++;
	}
	return (tem);
}
