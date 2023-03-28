#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string containing format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	count = parse_format_string(format, args);

	va_end(args);
	return (count);
}

