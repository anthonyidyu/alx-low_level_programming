#include <stdio.h>
#include <stdlib.h>

/**
* _putchar - prints a character
* @c: the character to print
*
* Return: 0 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}