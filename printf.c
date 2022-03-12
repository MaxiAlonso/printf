#include "printf.h"

/**
 * _printf - produce output according to a format.
 * @format: - define the format to print.
 * Return: 0
 **/

int _printf(const char *format, ...)
{
	print myprint[] = {
		{"d", print_number},
		{"i", print_number},
		{NULL, NULL},
	};

	int count, i;
	va_list args;

	va_start(args, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		count = 0;
		if (format[i] == '%')
		{
			while (count < 2)
			{
				if (format[i + 1] == myprint[count].pr[0])
				{
					myprint[count].f(args);
				}
				count++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (i);
}
