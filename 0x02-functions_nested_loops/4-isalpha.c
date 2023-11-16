#include "main.h"
/**
 * _isalpha - function that checks if c is a lowercase or uppercase character
 * @c: int that will use for the argument of the function
 * Return: always 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
