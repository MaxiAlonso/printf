#include "main.h"
/**
 * print_hp - Print number in base 16 lowercase.
 * @args: Argument passed.
 * Return: Return lenght of number.
 **/

int print_hp(va_list args)
{
	unsigned long int num;
	int a, rcount, i = 0;
	char *str;

	num = va_arg(args, long int);
	a = num;

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
	int rcount = 0;

	adress = va_arg(args, void *);

	if (adress == NULL)
	{
		_printf("(null)");
		return (6);
	}
	_putchar('0');
	_putchar('x');

	a = (unsigned long int)adress;

	rcount = _printf("%3", a);

	return (rcount + 2);
}
