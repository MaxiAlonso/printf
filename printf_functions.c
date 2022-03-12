#include "printf.h"
#include <stdarg.h>
/**
 * print_number - Print a integer.
 * @args: Arguments that passed.
 * Return: Return 0.
 */
int print_number(va_list args)
{
	int n;
	unsigned int num;
	unsigned int positive;
	unsigned int count;

	n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		num = (n * (-1));
	}
	else
	{
		num = n;
	}
	positive = num;
	count = 1;

	while (positive > 9)
	{
		positive /= 10;
		count *= 10;
	}
	for ( ; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + '0');
	}
	return (0);
}
