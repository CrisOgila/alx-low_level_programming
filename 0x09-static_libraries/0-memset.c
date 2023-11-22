#include "main.h"
/**
 * *_memset - program fills a block of memory with specified value
 * @s: Starting address of a memory
 * @b: The desired value
 * @n: number of bytes to be changed
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
