#include "main.h"

/**
 * jack_bauer - 24 hour timer count
 * Description: Prints the time count on new line
 * Return: time count
 */
void jack_bauer(void)
{
int i;
int j;
int temp;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
_putchar('0');
_putchar(i + '0');
}
else
{
temp = i % 10;
temp = i - temp;
temp /= 10;
_putchar(temp + '0');
_putchar((i % 10) + '0');
}
_putchar(':');
if (j < 10)
{
_putchar('0');
_putchar(j + '0');
}
else
{
temp = j % 10;
temp = j - temp;
temp /= 10;
_putchar(temp + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
}
