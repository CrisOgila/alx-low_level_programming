#include "main.h"
/**
 * _isalpha - function that checks if c is a lowercase or uppercase character
 * @c: int that will use for the argument of the function
 * Return: 1 if c is letter, and 0 if its not
 * */
int _isalpha(int c)
{
	    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

