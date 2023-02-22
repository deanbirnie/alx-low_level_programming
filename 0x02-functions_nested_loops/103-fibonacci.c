#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 4000000;
	long int prev = 0, curr = 1, next;
	long int sum = 0;

	while (curr <= limit)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
