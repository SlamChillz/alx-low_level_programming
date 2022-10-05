#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value using Jump searche algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to be searched for
 *
 * Return: index of value if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b = 0, min, step;

	if (array == NULL)
		return (-1);
	min = b, step = sqrt((double) size);
	while (array[min] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);
		a = b;
		b = b + step;
		min = b < size ? b : size - 1;
		if (a >= size - 1)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (a <= min && array[a] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	return (-1);
}
