#include "main.h"
/**
 * _puts - function that prints a string to stdout
 * @str: string to be printed
 * _putchar - prints new line
 * Return: always 0
 */
void _puts(char *str)
{
while (*str)
_putchar(*str);
_putchar('\n');
}
