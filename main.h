#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct pri - struct
 * @pr: a
 * @f: b
 **/

typedef struct pri
{
	char *pr;
	int (*f)(va_list args);
} print;

int _printf(const char *format, ...);
int print_number(va_list args);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percentage(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexalow(va_list args);
int print_hexaupp(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);

#endif
