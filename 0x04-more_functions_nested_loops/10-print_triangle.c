#include "main.h"
/**
 * print_triangle - create a triangle
 * @size: integer size of the triangle
 * Description: a function that prints a triangle, followed by a new line.
 * Return: None
 */
void print_triangle(int size)
{
	int x, y;

	x = 1;
	while (x <= size)
	{
		y = size - x;
		while (y)
		{
			_putchar(' ');
			y--;
		}
		y = x;
		while (y)
		{
			_putchar('#');
			y--;
		}
		_putchar('\n');
		x++;
	}
}

