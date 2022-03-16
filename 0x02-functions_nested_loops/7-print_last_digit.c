#include "main.h"

/**
 * print_last_digit - check the code
 * @num: input to the program
 * Return: last digit of num
 */
int print_last_digit(int num)
{
int last;
int sum;
int product;
if (num < 0)
{
num *= -1;
}
last = num % 10;
product = last * 10;
sum = product + last;
return (sum);
}
