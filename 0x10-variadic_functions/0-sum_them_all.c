#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's parameters
 *
 * @n: value passed to function
 *
 * Return: returns the sum of all values or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_p;
	unsigned int i, sum;

	va_start(arg_p, n);

	if (n != 0)
	{
		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg_p, int);
		}

		va_end(arg_p);
		return (sum);
	}

	return (0);
}
