#include "main.h"
/**
 * print_sign - prints a sign of a number
 * @n: The number that the sign will be printed
 *
 * Return: 1 if n is greater than 0
 * 0 if the n is zero
 * -1 if the number is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
