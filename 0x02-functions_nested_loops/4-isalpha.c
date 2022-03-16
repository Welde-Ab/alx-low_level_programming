#include "main.h"

/**
 * _isalpha - check the code.
 * @c: character to be checked
 * Return: 1 - if alpha or 0 - if not alpha
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
