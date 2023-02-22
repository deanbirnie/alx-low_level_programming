#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int prev = 1, curr = 1, next;
	unsigned long int prevH, prevL, currH, currL, nextH, nextL;

	printf("%lu", curr);
	for (i = 1; i < 91; i++)
	{
		next = prev + curr;
		printf(", %ld", next);
		prev = curr;
		curr = next;
	}
	prevH = (prev / 100000000000);
	prevL = (prev % 100000000000);
	currH = (curr / 100000000000);
	currL = (curr % 100000000000);

	for (i = 92; i < 99; i++)
	{
		nextH = (prevH + currH) / 10;
		nextL = (prevL + currL) % 100000000000;
		printf(", %lu@%lu@", nextH, nextL);
		prevH = currH;
		prevL = currL;
		currH = nextH;
		currL = nextL;
	}
	printf("\n");

	return (0);
}
