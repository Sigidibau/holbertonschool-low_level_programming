#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a
 * specific char
 * @size: size of the array
 * @c: the character to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
=======

/**
 *
 *
 *
 *
 *
>>>>>>> 22579dd (fix)
 */

char *create_array(unsigned int size, char c)
{
<<<<<<< HEAD
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
=======

>>>>>>> 22579dd (fix)
