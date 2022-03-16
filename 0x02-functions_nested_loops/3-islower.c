#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: character to be checked
 * Return: O if not lower & 1 if lower
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
