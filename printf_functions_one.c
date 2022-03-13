#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert a number into binary and print it
 * @args: argument passed.
 * Return: lenght of the binary number
 **/

int print_binary(va_list args)
{
	unsigned int num, a, rcount, i = 0;
	char *str;

	num = va_arg(args, int);
	a = num;

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
 * @args: Argument passed.
 * Return: Return lenght of number.
 */
int print_octal(va_list args)
{
	unsigned int num, a, i, rcount;
	char *str;

	num = va_arg(args, int);
	a = num;

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
	free(str);
	return (rcount);
}

/**
 * print_hexalow - Print number in base 16 lowercase.
 * @args: Argument passed.
 * Return: Return lenght of number.
 */
int print_hexalow(va_list args)
{
	unsigned int num, a, rcount, i;
	char *str;

	num = va_arg(args, int), a = num;
	while (a > 0)
		a /= 16, i++;
	rcount = i, str = malloc((sizeof(char) * i) + 1), i = 0;
	while (num > 0)
	{
		if ((num % 16) <= 9)
			str[i] = (num % 16) + '0';
		else
			switch (num % 16)
			{
				case 10:
					str[i] = 'a';
					break;
				case 11:
					str[i] = 'b';
					break;
				case 12:
					str[i] = 'c';
					break;
				case 13:
					str[i] = 'd';
					break;
				case 14:
					str[i] = 'e';
					break;
				case 15:
					str[i] = 'f';
					break;
			}
		num /= 16, i++;
	}
	while (i != 0)
		_putchar(str[i]), i--;
	_putchar(str[i]);
	free(str);
	return (rcount);
}

/**
 * print_hexaupp - Print number in base 16 uppercase.
 * @args: Argument passed.
 * Return: Return lenght of number.
 */
int print_hexaupp(va_list args)
{
	unsigned int num, a, rcount, i;
	char *str;

	num = va_arg(args, int), a = num;
	while (a > 0)
		a /= 16, i++;
	rcount = i, str = malloc((sizeof(char) * i) + 1), i = 0;
	while (num > 0)
	{
		if ((num % 16) <= 9)
			str[i] = (num % 16) + '0';
		else
			switch (num % 16)
			{
				case 10:
					str[i] = 'A';
					break;
				case 11:
					str[i] = 'B';
					break;
				case 12:
					str[i] = 'C';
					break;
				case 13:
					str[i] = 'D';
					break;
				case 14:
					str[i] = 'E';
					break;
				case 15:
					str[i] = 'F';
					break;
			}
		num /= 16, i++;
	}
	while (i != 0)
		_putchar(str[i]), i--;
	_putchar(str[i]);
	free(str);
	return (rcount);
}

