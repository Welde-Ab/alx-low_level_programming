#include "main.h"
/**
 * print_alphabet - simply prints _putchar
 * Description: a function that prints the alphabet
 * Return: Program returns 0
 */
void print_alphabet(void)
{
int ascii = 97;
while (ascii <= 122)
{
_putchar((char)ascii);
ascii++;
}
_putchar('\n');
}
