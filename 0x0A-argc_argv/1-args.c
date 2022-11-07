#include <stdio.h>
/**
 * main - a function printing name of file
 * @argc: the name of file given as argument
 * @argv: the index of the name of file
 * Return: a return value of the function
 */
int main(int argc, **char argv[])
{
	int i = 0;
	
	while (argc ++)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
