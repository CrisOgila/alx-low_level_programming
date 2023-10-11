#include <stdio.h>
/**
 * main - This is the main function
 * Return: always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 100; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(' ');
	return (0);
}
