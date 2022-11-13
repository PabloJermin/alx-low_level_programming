#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of the program
 * @ac: an argument of the function
 * @av: another argument to the function
 * Return: alwasy a succes
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int a, b, c, d, e;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
	}
	p = malloc(len + (ac + 1)) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	b = 0;
	c = 0;
	d = 0;
	while (c < len + ac)
	{
		if (av[c][d] != '\0')
		{
			p[b] = av[b][d];
			c++;
			d++;
		}
		else
		{
			p[c] = '\n';
			c++;
			b++;
			d = 0;
		}
	}
	p[c] = '\0';
	return (p);
}
