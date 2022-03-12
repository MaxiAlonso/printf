#include "main.h"
#include <stdarg.h>
/**
 * print_number - Print a integer.
 * @args: Arguments that passed.
 * Return: Return lenght of number.
 */
int print_number(va_list args)
{
	int n;
	int rcount = 0;
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
		rcount++;
	}
	return (rcount);
}

/**
 * print_char - Print a character.
 * @args: Arguments passed.
 * Return: Return lenght of char
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - Print strings.
 * @args: Argument passed.
 * Return: Return lenght of string
 */
int print_string(va_list args)
{
	char *str;
	int i = 0;
	
	str = va_arg(args, char *);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percentage - Print percentage.
 * @args: Argument passed.
 * Return: Return lenght of char.
 */
int print_percentage()
{
	_putchar('%');
	return (1);
}
