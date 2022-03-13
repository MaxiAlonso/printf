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

/**
 * print_rot13 - Print string in rot13
 * @args: Argument passed
 * Return: Return lenght of string
 */

int print_rot13(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				_putchar(str[i] + 13);
			}
			else
			{
				_putchar(str[i] - 13);
			}
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	return (i);
}
