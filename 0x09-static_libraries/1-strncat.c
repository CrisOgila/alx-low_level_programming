#include "main.h"
 /**
  *   _strncat - a function that concatenate two strings
  *     @dest: memory where is stored
  *       @src: memory where is copied
  *         @n: number of bytes
  *           Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
