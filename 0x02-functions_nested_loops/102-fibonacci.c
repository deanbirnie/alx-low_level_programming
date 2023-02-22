#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	long int prev = 0, curr = 1, next;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			next = prev + curr;
			printf("%ld, ", next);
			prev = curr;
			curr = next;
		}
		else
		{
			next = prev + curr;
			printf("%ld\n", next);
		}
	}

	return (0);
}
