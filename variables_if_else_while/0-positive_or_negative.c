#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%dis negative\n", n);
}
else if (n == 0)
{
printf("%dis zero\n", n);
}
else 
{
printf("%dis positive\n", n);
}
return (0);
}