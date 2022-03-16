#include "main.h"

/**
 * print_sign - the sign of a number
 * @n: input number
 * Return: -1, 0, or 1 based on input
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('+');
return (1);
}
}
