#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
