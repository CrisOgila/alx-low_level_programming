#include "main.h"
/**
 * _abs - function that computes absolute value of an integer
 * @c: The number to compute the absolute value for
 * Return: absolute value of number @c
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
