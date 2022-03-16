#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - check the code
 * @num: input to the program
 * Return: last digit of num
 */
int print_last_digit(int num)
{
int last = abs(num) % 10;
return (last * 10 + last);
}
