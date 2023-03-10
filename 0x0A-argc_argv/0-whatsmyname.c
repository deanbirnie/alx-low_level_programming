#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program without having to be recompiled
 *
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
