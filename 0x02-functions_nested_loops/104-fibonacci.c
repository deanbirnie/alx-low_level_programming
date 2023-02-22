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
	for (i = 1; i < 90; i++)
	{
		next = prev + curr;
		printf(", %ld", next);
		prev = curr;
		curr = next;
	}

	prevH = (prev / 100000);
	prevL = (prev % 100000);
	currH = (curr / 100000);
	currL = (curr % 100000);

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
