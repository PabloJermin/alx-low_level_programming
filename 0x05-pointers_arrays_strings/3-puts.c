#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @: str: a string parameter for the function
 * Return: Returns a number
 */
void _puts(char *str)
{
	char *a;
	
	a = &str;
	printf(a);
	printf("\n");
}
