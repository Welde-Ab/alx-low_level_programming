#include "main.h"
/**
 * print_alphabet - simply prints _putchar
 * Description: a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Program returns 0
 */
void print_alphabet(void)
{
int ascii = 97;
while(ascii<=97)
{
putchar((char)ascii);
ascii++;
}
putchar("\n");
}
