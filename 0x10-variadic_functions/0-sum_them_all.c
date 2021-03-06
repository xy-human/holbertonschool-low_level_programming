#include "variadic_functions.h"

/**
 * sum_them_all - Sum all arguments
 * @n: number of arguments
 * Return: sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i = 0;
		int sumAll = 0;

		va_list listArgs;

		va_start(listArgs, n);
		for (i = 0; i < n; i++)
			sumAll += va_arg(listArgs, int);

		va_end(listArgs);
		return (sumAll);
	}
	return (0);
}
