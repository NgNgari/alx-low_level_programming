#include "main.h"

/**
 * print_alphabet -> prints the lower alphabet
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar (alph);
	}

	_putchar('\n');
}
