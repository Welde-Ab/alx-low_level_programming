#include "main.h"

/**
 * main - jack_bauer
 * Description: Prints the time count on new line
 * Return: time count
 */
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
for (j=0; j < 60; j++)
{
if (i < 10)
{
_putchar('0' + i);
}
else
{
_putchar(i);
}
_putchar(':');
if (j < 10)
{
_putchar('0' + j);
}
else
{
_putchar(j);
}
_putchar('\n');
}
}  
}
