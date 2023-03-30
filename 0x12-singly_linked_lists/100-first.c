#include "lists.h"

void __attribute__((constructor)) execute_first(void);
/**
 * execute_first - code to be executed before any main function
 */
void execute_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
