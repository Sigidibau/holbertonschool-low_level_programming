#include "main.h"

/**
 *_memcpy - compies memory area
 *@dest: where to copy mem
 *@src: mem the area copy from
 *@n: number of bytes
 *return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
