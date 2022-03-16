#include "main.h"

/**
 * print_last_digit - check the code
 * @num: input to the program
 * Return: last digit of num
 */
int print_last_digit(int num)
{
int last;
if (num < 0)
{
num = -1 * num;
}
last = num % 10;
last = (last * 10) + last;
return (last);
}
