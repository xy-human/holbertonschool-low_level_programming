#include "holberton.h"

/**
 *main - Initial function
 *@argc: number of command line arguments
 *@argv: array containing the program command line arguments
 *Return: 0 to success;
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 0)
	{
		while (argv[i])
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	
	return (0);
}
