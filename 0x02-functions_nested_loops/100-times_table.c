#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print the times table until n
 * @n: n times table to be printed
 * Description: a function that prints the n times table, starting with 0.
 * Return: none (void)
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n >= 0 && n <= 15)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				x = i * j;
				if (j == n)
					printf("%3d\n", x);
				else
					printf("%3d, ", x);
				j++;
			}
			i++;
		}
	}
}
