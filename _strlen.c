#include "main.h"

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
