#include "main.h"

/**
 * _printf - implementation for the printf function
 * @format: format specifier
 * Return: formatted output
 */

int _printf(const char *format, ...)
{
	int printed = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printed = selector(format, args, printed);
			format++;
		}
		else
		{
			putchar(*format);
			printed++;
			format++;
		}
	}
	va_end(args);
	return (printed);
}
