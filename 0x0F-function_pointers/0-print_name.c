#include "function_pointers.h"

/**
 * print_name - function that points to a function and prints a name
 *
 * @name: name passed to function
 * @f: variable declared as pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}

	f(name);
}
