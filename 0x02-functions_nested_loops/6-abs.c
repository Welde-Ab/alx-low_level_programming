#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value
 * @num: number from user
 * Return: absolute value of input
 */
int _abs(int num)
{
if (num < 0)
{
return (-num);
}
else if (num == 0)
{
return (0);
}
else (num > 0)
{
return (num);
}
}
