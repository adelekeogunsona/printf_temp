#include "main.h"

/**
 * print_c - Prints character
 * @n: character
 *
 * Return: void
*/

void print_c(int n)
{
	_putchar(n);
}

/**
 * print_s - Prints string
 * @str: Pointer to string
 *
 * Return: void
*/

void print_s(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
		_putchar(str[i]);
}

/**
 * print_int - Prints integer
 * @n: integer
 *
 * Return: void
*/

void print_int(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar('-');
	}

	a /= 10;

	if (a != 0)
		print_int(a);

	_putchar((unsigned int) n % 10 + '0');
}
