#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to copy
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int b = 0;
	unsigned int c = 0;

	if (str == NULL)
		return (NULL);

	while (str[b])
		i++;

	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULL);

	while (str[c])
	{
		a[c] = str[c];
		c++;
	}

	a[c + 1] = 0;
	return (a);
}
