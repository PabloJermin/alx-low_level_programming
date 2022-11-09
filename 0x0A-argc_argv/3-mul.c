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
	int numb1 = atoi(argv[0]);
	int numb2 = atoi(argv[1]);
	int result;

	result = numb1 * numb2;
	printf("%d\n", result);

	return (0);
}
