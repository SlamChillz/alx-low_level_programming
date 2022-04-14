#include "variadic_functions.h"

/**
 * sum_them_all - sum parameters of a function
 * @n: integer varible
 * @...: list of integer variables
 *
 * Return: integer, sum or 0 if n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}

