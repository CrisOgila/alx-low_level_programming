#include "main.h"
/**
 * _strpbrk - This is the main function
 * @s: input value
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
