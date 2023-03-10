#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 (success) OR 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		int i;

		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);

		return (0);
	}
}
