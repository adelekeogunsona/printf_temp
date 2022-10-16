#include "main.h"

/**
 * check_specifier - Checks if character exists in specifier array
 * @c: Character
 *
 * Return: 1 if yes, 0 otherwise
*/

int check_specifier(int c)
{
	int i;

	int spe[] = {99, 115, 37, 100, 105};

	for (i = 0; i < 5; i++)
	{
		if (c == spe[i])
			return (1);
	}

	return (0);
}
