#include "main.h"

/**
 * print_alphabet - prints a to z and a new line when called
 *
 * Return: 0 Always (success)
 */

void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
