#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	char message[];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	if (last_digit > 5)
	{
		message = "and is greater than 5";
	}

	else if (last_digit < 6 && last_digit != 0)
	{
		message = "and is less than 6 and not 0";
	}

	else if (last_digit == 0)
	{
		message = "and is 0"
	}

	printf("Last digit of %d is %d %s", n, last_digit, message)

return (0);
}
