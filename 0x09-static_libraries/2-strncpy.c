#include "main.h"
/**
 * _strncpy - a function that copys strings
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int b;

while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}
return (dest);
}
