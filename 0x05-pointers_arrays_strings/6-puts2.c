#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int  longi = 0;
	int  a = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	a = longi - 1;
	for (o = 0 ; o <= a ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
