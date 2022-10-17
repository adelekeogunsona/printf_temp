#include "main.h"

/**
 * _printf - Prints arguments to standard output
 * @format: Pointer to specifier
 *
 * Return: length of format
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i, total = 0, tmp;
	char *str;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && check_specifier(format[i + 1]) == 1)
			continue;
		if (format[i - 1] == '%' && check_specifier(format[i]) == 1)
		{

			if (format[i] == '%')
				_putchar('%'), total++;
			else if (format[i] == 'c')
				print_c(va_arg(args, int)), total++;
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				print_s(str);
				total += _strlen(str);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				tmp = va_arg(args, int);
				print_int(tmp), total += digitlen(tmp);
			} continue;
		}
		_putchar(format[i]), total++;
	}
	va_end(args);
	return (total);
}
