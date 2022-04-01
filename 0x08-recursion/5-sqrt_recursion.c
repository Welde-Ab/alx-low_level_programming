#include "main.h"

/**
* _sqrt_recursion - find natural square root
* @n: int
* Return: int
*/

int _sqrt_recursion(int n)
{
return (_square(n, 1));
}

/**
* _square - find square root
* @n: int to find square root
* @val: square root
* Return: int
*/

int _square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return  (_square(n, val + 1));
else
return (-1);
}
