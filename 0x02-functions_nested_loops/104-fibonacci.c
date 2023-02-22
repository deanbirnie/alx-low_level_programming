#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	long int prev = 0, curr = 1, next;
	long int prevH, prevL, currH, currL, nextH, nextL;

	printf("%lu", curr);
	for (i = 1; i < 90; i++)
	{
		next = prev + curr;
		printf(", %ld", next);
		prev = curr;
		curr = next;
	}

	prevH = (prev / 1000000);
	prevL = (prev % 1000000);
	currH = (curr / 1000000);
	currL = (curr % 1000000);

	for (i = 90; i <= 98; i++)
	{
		nextH = (prevH + currH);
		nextL = (prevL + currL);
		printf(", %lu%lu", nextH, nextL);
		prevH = currH;
		prevL = currL;
		currH = nextH;
		currL = nextL;
	}
	printf("\n");

	return (0);
}
