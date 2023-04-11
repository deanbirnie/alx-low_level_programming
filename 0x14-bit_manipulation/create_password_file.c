#include "main.h"

/**
 * main - User must manually edit code to manipulate values in the string
 * which will then be used to populate a file to be used as the password.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *pass = malloc(sizeof(char) * 5);
	// I have used the hex values as they appear in the register from GDB.
	char c[5] = {0x48, 0x6f, 0x6c, 0x4, '\0'}, run[100];
	int i;

	for (i = 0; c[i]; i++)
		pass[i] = c[i];

	pass[i] = '\0';

	sprintf(run, "echo %s > 101-password", pass);
	system(run);

	printf("Password file created.\n");

	free(pass);

	return (0);
}
