#include "main.h"

/**
 * handle_specifier - handles conversion specifier in format string
 * @format: format string containing format specifiers
 * @args: list of arguments for format specifiers
 * @pos: current position in the format string
 *
 * Return: number of characters printed
 */
int handle_specifier(const char *format, va_list args, int *pos)
{
	int count = 0;
	const char *str;
	void *ptr;

	switch (format[++(*pos)])
	{
		case 'c':
			count += print_char(va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, const char *);
			if (!str)
				str = "(null)";
			count += print_str(str);
			break;
		case 'd': case 'i':
			count += print_int(va_arg(args, int));
			break;
		case 'u':
			count += print_uint(va_arg(args, unsigned int));
			break;
		case 'o':
			count += print_octal(va_arg(args, unsigned int));
			break;
		case 'x': case 'X':
			count += print_hex(va_arg(args, unsigned int), format[*pos] == 'X');
			break;
		case 'p':
			ptr = va_arg(args, void *);
			count += print_ptr(ptr);
			break;
		case '%':
			count += print_char('%');
			break;
		default:
			count += print_char('%');
			count += print_char(format[*pos]);
			break;
	}
	return (count);
}

