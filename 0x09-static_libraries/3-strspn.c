  #include "main.h"
/**
 * _strspn - This is the main function
 * @s: input value
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
n++;
break;
}
else if (accept[a + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
   
