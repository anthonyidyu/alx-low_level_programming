#include <stdio.h>

/**
 * main - is a funtion that prints the name.
 * @argc: is an argument value for char.
 * @argv: is an argument value for char.
 * Returna: Returns always success.
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
