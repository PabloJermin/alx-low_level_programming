#include <stdio.h>
/**
 * main-combination of teo randon numbers
 * Return: success
 */
int main(void)
{
	int single;
	int dobs;

	for (dobs = '0'; dobs <= '9'; dobs++)
		for (single = (dobs + 1); single <= '9'; single++)
		{
			putchar(dobs);
			putchar(single);

			if (dobs != '8' || single != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');

	return (0);
}
