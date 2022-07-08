#include "main.h"

/**
 * print_line - print n number of underscores then a new line
 * @n: The number of underscore to be printed.
 * If zero or less, prints a new line
 * Return: void
 */
void print_line(int n)
{
int c;

if (n < 1)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
_putchar(95);
}
_putchar('\n');
}
}
