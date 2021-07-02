#include "holberton.h"

/**
 * rot13 - change letter in convertion ROT13
 * @cc: Chain of characters to convert
 * Return: Return chain of characters modified
 */
char *rot13(char *cc)
{
	int sizeC = 0;
	int i = 0;

	while (cc[sizeC])
	{
		sizeC++;
	}
	for (i = 0; i < sizeC; i++)
	{
		if ((*(cc + i) >= 97 && *(cc + i) <= 109) ||
		(*(cc + i) >= 65 && *(cc + i) <= 77))
		{
			cc[i] = cc[i] + 13;
		}
		else if ((*(cc + i) >= 78 && *(cc + i) <= 90) ||
		(*(cc + i) >= 110 && *(cc + i) <= 122))
		{
			cc[i] = cc[i] - 13;
		}
	}
	return (cc);
}