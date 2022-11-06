#include "main.h"
#include <stdio.h>
/**void print_diagsums - printing the sum of diagonals
 * @a: the parameter of the unction
 * @size: the sixe of the parameter
 * Return: a return value for the function
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += a[i];
		}
		if (i % (size - 1) == 0 && (i < (size * size - 1)))
		{
			sum2 += a[i];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
