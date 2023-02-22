#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	long int prev = 1, curr = 1, next;
	long int prevH, prevL, currH, currL, nextH, nextL;

	printf("%lu", curr);
	for (i = 0; i < 92; i++)
	{
		next = prev + curr;
		printf(", %ld", next);
		prev = curr;
		curr = next;
	}
	nextH = (prev / 1000000);
	nextL = (prev % 1000000);

	for (i = 91; i < 98; i++)
	{
		printf(", %lu%lu", nextH, nextL);
		prevH = currH;
		prevL = currL;
		currH = nextH;
		currL = nextL;
		nextH = prevH + currH;
		nextL = prevL + currL;
	}
	printf("\n");

	return (0);
}
