#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program without having to be recompiled
 *
 * @argc: argc size of argv array
 * @argv: argv array of parameters
 *
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
