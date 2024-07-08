#include "main.h"
/**
 * print_alphabet - cah is goint to print the alphabet
 *
 * description: prints the whole alphabet
 */
int _isalpha(int c)

{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
