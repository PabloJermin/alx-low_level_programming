#include <stdio.h>
/**
 * main - program that finds and prints the sum of the even-valued
 * Return: the dum of evaluated number
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sums;
	float to_sum;

	while (1)
	{
		sums = fib1 + fib2;
		if (sums > 4000000)
			break;
		if ((sums % 2) == 0)
			to_sum += sums;

		fib1 = fib2;
		fib2 = sums;
	}
	printf("%.0f\n", to_sum);

	return (0);
}

