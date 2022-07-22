#include "main.h"
/**
 * _abs - Prints absolute value of a number
 * @n: Number that the absolute value will be printed
 *
 * Return: 1 if greater than 0, 0 if zero, -1 if less than 0
 */
int _abs(int n)
{
if (n < 0)
return (n * -1);
return (n);
}
