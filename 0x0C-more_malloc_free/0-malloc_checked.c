#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	/*declare a pointer to be used*/
	int *ptr;
	/*create memory spaces in heap*/
	ptr = malloc(b);
	/*if malloc doesn't create memory*/
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);/*i.e: end the program with status value 98*/
	}
	return (ptr);/*ptr is the void pointer*/
}
