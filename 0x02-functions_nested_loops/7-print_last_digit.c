#include "main.h"

/**
 * print_last_digit - check the code
 * @num: input to the program
 * Return: last digit of num
 */
int print_last_digit(int num)
{
int last;
int temp;
if (num < 0)
{
num *= -1;
}
last = num % 10;
temp = last;
last = last * 10;
last = last + temp;
return (last);
}
