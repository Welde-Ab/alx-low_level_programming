#include "main.h"

/**
 * print_last_digit - check the code
 * @num: input to the program
 * Return: last digit of num
 */
int print_last_digit(int num)
{
if (num < 0)
{
num *= -1;
}
num %= 10;
_putchar(num + '0');
return (num);
}
