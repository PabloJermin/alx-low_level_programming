#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**is_didit - checks if string contains a digit
 * @s: an argument to the function
 * Return: Alwasya a zero or 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
