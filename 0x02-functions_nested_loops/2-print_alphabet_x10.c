#include "main.h"
/**
 * print_alphabet_x10 - prints times the alphabet
 * Description: Prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
for (int i=0; i<10;i++)
{
for (char lett = 'a'; lett <= 'z'; lett++)
{
putchar(lett);      
}
putchar('\n'); 
}
}
