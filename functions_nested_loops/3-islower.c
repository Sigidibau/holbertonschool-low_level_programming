#include "main.h"
/**
 * main - check the code.
 *
 * Return - 1 for the lowercase or 0 otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
