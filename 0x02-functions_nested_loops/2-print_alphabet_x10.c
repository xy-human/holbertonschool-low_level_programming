#include "holberton.h"

/**
 * print_alphabet_x10 - function integer without parameters
 * Description: show/print ten times the alphabet
 * Return: return 0 to success
 */
void print_alphabet_x10(void)
{
	char ch = 97;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 97; ch < 123; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
