#include "main.h"

/**
 * parse_format_string - parses format string and prints output
 * @format: format string containing format specifiers
 * @args: list of arguments for format specifiers
 *
 * Return: number of characters printed
 */
int parse_format_string(const char *format, va_list args)
{
	int i, count = 0;

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
			count += handle_specifier(format, args, &i);
		else
			count += print_char(format[i]);
	}

	return (count);
}

