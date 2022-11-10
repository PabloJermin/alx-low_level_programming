#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two arguments
 * @argc: an argument to the function
 * @argv: second argument to the function
 * Return: returns always 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1] * atoi(argv[2]));
	return (0);
}
