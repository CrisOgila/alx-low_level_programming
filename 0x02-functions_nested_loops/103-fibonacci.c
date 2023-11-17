#include <stdio.h>
/**
 * main - Prints the sum of even-valued fibonacci sequence
 * terms not exceeding 4000000
 * Return: Always 0
 */
int main(void)
{
int limit = 4000000;
int fib1 = 1;
int fib2 = 2;
int next;
int sum = 2;

while (next <= limit)
{
next = fib1 + fib2;
if (next % 2 == 0)
sum = sum + next;
fib1 = fib2;
fib2 = next;
}
printf("%d\n", sum);
return (0);
}
