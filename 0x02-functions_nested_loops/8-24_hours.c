#include "main.h"

/**
 * jack_bauer: 24 hour timer count
 * Description: Prints the time count on new line
 * Return: time count
 */
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
_putchar('0');
_putchar((char)i);
}
else
{
_putchar((char)i);
}
_putchar(':');
if (j < 10)
{
_putchar('0');
_putchar((char)j);
}
else
{
_putchar((char)j);
}
_putchar('\n');
}
}  
}
