#include "main.h"

/**
 * print_binary - convert a number into binary and print it
 * @args: argument passed.
 * Return: lenght of the binary number
 **/

int print_binary(va_list args)
{
	int num, a, i, rcount;
	char *str;

	num = va_arg(args, int);
	a = va_arg(args, int);

	while (a > 0)
	{
		a /= 2;
		i++;
	}
	rcount = i;
	str = malloc((sizeof(char) * i) + 1);

	i = 0;
	while (num > 0)
	{
		str[i] = (num % 2) + '0';
		num /= 2;
		i++;
	}
	while (i != 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar(str[i]);
	return (rcount);
}
