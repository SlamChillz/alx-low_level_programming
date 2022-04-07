#include "main.h"

/**
 * _calloc - psuedo calloc
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Description: a function that allocates memory for an array, using malloc
 * Return: NULL, if function fails || nmemb || size = 0, else pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}

