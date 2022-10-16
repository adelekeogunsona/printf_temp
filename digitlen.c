#include "main.h"

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
