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
	free(str);
	return (rcount);
}

/**
 * print_unsigned - Print positive number.
 * @args: Argument passed.
 * Return: Return lenght of numbers.
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	int rcount = 0;
	unsigned int num;
	unsigned int positive;
	unsigned int count;

	n = va_arg(args, unsigned int);

	num = n;
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
		rcount++;
	}
	return (rcount);
}

/**
 * print_octal - Print number in base 8.
 * @arg: Argument passed.
 * Return: Return lenght of number.
 */
int print_octal(va_list args)
{
	unsigned int num, a, i, rcount;
	char *str;

	num = va_arg(args, int);
	a = va_arg(args, int);

	while (a > 0)
	{
		a /= 8;
		i++;
	}
	rcount = i;
	str = malloc((sizeof(char) * i) + 1);

	i = 0;
	while (num > 0)
	{
		str[i] = (num % 8) + '0';
		num /= 8;
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

