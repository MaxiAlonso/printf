#include "main.h"
#include <stdio.h>
/**
 * print_hexapointer - Print number in base 16 lowercase.
 * @a: Argument passed.
 * Return: Return lenght of number.
 **/

int print_hexapointer(unsigned long int a)
{
	unsigned long int num;
	unsigned int rcount, i = 0;
	char *str;

	num = a;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (a > 0)
	{
		a /= 16;
		i++;
	}
	rcount = i;
	str = malloc((sizeof(char) * i) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	i = 0;
	while (num > 0)
	{
		if ((num % 16) <= 9)
			str[i] = (num % 16) + '0';
		else
			str[i] = (num % 16) - 10 + 'a';
		num /= 16, i++;
	}
	while (i != 0)
	{
		i--;
		_putchar(str[i]);
	}
	free(str);
	return (rcount);
}

/**
 * print_p - Print adress memmory of a pointer.
 * @args: Argument passed.
 * Return: Return lenght of the adress.
 */
int print_p(va_list args)
{
	void *adress;
	long int a = 0;
	unsigned int rcount = 0;

	adress = va_arg(args, void *);

	if (adress == NULL)
	{
		_printf("(nil)");
		return (5);
	}
	_putchar('0');
	_putchar('x');
	rcount = 2;

	a = (unsigned long int)adress;

	rcount += print_hexapointer(a);

	return (rcount);
}
