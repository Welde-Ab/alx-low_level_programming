#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main function
 *Description: Take a random number and assign positive or negative to it
 *Return: 0 upon
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
