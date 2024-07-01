#include "main.h"

/**
 *_memset - fill mem with a constant byte
 *@s: pointer to me area to fill
<<<<<<< HEAD
 *@n: nuber of byte to fill
=======
 *@n: nuber of byte to fill 
>>>>>>> refs/remotes/origin/main
 *@b: constant
 *Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;
<<<<<<< HEAD

=======
	
>>>>>>> refs/remotes/origin/main
	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
