#include "main.h"
/**
 * _printf - produce output according to a format.
 * @format: - define the format to print.
 * Return: 0
 **/

int _printf(const char *format, ...)
{
	print myprint[] = {
		{"d", print_number}, {"i", print_number}, {"c", print_char},
		{"s", print_string}, {"%", print_percentage}, {"b", print_binary},
		{"u", print_unsigned}, {"o", print_octal}, {"x", print_hexalow},
		{"X", print_hexaupp}, {"r", print_rev}, {"R", print_rot13},
		{NULL, NULL},
	};
	int count = 0, rcount = 0, i = 0, s = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		count = 0;
		if (format[i] == '%')
		{
			s = 0;
			if (format[i + 1] == '\0')
				return (-1);
			while (myprint[count].pr)
			{
				if (format[i + 1] == myprint[count].pr[0])
				{
					rcount	+= (myprint[count].f(args)) - 2;
					i++, s = 1;
					break;
				}
				count++;
			}
			if (s == 0)
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
	i++;
	}
	va_end(args);
	return (i + rcount);
}
