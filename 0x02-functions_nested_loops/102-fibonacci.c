#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, prev = 0, curr = 1, next;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			next = prev + curr;
			printf("%d, ", next);
			prev = curr;
			curr = next;
		}
		else
		{
			next = prev + curr;
			printf("%d\n", next);
		}
	}

	return (0);
}
