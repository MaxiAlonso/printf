#include "main.h"
/**
 * print_rev - Print string in reverse
 * @args: Argument passed
 * Return: Return lenght of string
 */
int print_rev(va_list args)
{
	char *str;
	int i = 0;
	int a = 0;

	str = va_arg(args, char *);

	while (str[i])
	{
		i++;
	}
	for (a = (i - 1); a >= 0; a--)
	{
		_putchar(str[a]);
	}
	return (i);
}
