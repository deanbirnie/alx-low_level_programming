#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to the function
 *
 * @separator: separator for each number printed
 * @n: number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator || (separator && !i))
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
