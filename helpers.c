#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _strlen - Returns the length of a string
* @s: Character to be counted
*
* Return: The length of char s
*/

int _strlen(const char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;

	return (length);
}

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

/**
* digitlen - Returns the length of a integer
* @n: Character to be counted
*
* Return: The length of char n
*/

int digitlen(int n)
{
	int length = 0;

	do {
	n /= 10;
	++length;
	} while (n != 0);

	return (length);
}
