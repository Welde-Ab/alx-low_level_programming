#include "main.h"

/**
 * print_last_digit - check the code
 * @n: input to the program
 * Return: last digit of num
 */

int print_last_digit(int n)
{
int nv;
if (n < 0)
nv = -1 * (n % 10);
else
nv = n % 10;
_putchar(nv + '0');
return (nv);
}
