#include "main.h"

/**
 *_strchr - locates a char in a string.
 *@s: string
 *@c: char
 *return: pointer to the first char c in the string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s ==  c)
			return (s);
		s++;
	}
		return ('\0');
}
