#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 *
 * @s: pointer to the address of the value
 * @to: value to change to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
