#include <stdio.h>
/**
 * main - a function that prints all the names in the argument
 * @argc: an argument counting the number of arguments
 * @argv: the names of the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
