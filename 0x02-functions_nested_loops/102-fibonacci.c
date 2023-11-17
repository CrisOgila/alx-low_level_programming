#include <stdio.h>
/**
 * main - Prints first 50 fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
unsigned long int fib1 = 1;
unsigned long int fib2 = 2;
unsigned long int next;
int i;

printf("%lu, ", fib1);
for (i = 1 ; i < 50 ; i++)
{
printf("%lu", fib2);
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
if (i != 49)
printf(", ");
}
printf("\n");
return (0);
}
