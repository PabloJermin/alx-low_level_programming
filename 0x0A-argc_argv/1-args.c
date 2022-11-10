#include <stdio.h>
/**
 * main - a function printing name of file
 * @argc: the name of file given as argument
 * @argv: the index of the name of file
 * Return: a return value of the function
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
		for (i = 0; *argv; i++, *argv++)
			;
	printf("%d\n", i - 1);
	return (0);
}
