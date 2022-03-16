#include "main.h"
/**
 * main - simply prints _putchar
 * Description: main funciton prints the character _putchar
 * Return: Program returns 0
 */
int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int ascii = 97;
while(ascii<=122)
{
putchar((char)ascii);
ascii++;
}
putchar('\n');
}
