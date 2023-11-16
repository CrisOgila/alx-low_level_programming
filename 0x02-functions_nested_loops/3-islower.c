#include "main.h"
/**
 * _islower - function that checks for lower case character
 * @c: int that will use for the argument of the function
 * Return: always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
