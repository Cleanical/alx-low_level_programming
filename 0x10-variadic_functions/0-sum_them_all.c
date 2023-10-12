#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Is a function that returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: Variable number of paramters whose sume is to be calculated
 * Return: 0, if n == 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
