#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to the function
 *
 * @seaparator: separator for each number printed
 * @n: number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_p;
	unsigned int i = 0;

	va_start(arg_p, n);

	if (separator != NULL)
	{
		printf("%d", va_arg(arg_p, int));
		i++;
		for (; i < n; i++)
		{
			printf("%s%d", separator, va_arg(arg_p, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg_p, int));
		}
	}
	printf("\n");
}
