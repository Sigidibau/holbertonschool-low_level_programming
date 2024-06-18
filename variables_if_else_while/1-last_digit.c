#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/***
 *  more headers goes there
 *
 * betty style doc for function main goes there
 */
int main(void)
{
	int n, lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, lst);
	}
	else if (lst == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst);
	}
	else
	{
		printf("Last digit of %d is and is %d less than 6 and not 0\n", n, lst);
	}
	return (0);
}
