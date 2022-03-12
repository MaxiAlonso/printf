#include "printf.h"

/**
 * _printf - produce output according to a format.
 * @format: - define the format to print.
 * Return: 0
 **/

int _printf(const char *format, ...)
{
	print my_print{
		{"d", print_number}
		{"i", print_number}
		{NULL, NULL}
	};

	va_list args,
	va_start(args, format);
	unsigned int i = 0;

	while (format[i] != NULL && fomart[i])
	{
		count = 0;
		if (format[i] == %)
		{
			while (count < 2)
			{
				if (format[i + 1] == my_print[count].pr[0])
				{
					myprint[count].f(args);
				}
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
