#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using mallo
 * but ends termination process with 98
 * @b: size of memory to allocate
 * Return: address of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
