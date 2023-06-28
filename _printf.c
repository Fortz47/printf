#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: a format
 *
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
	int i, count;
	int (*func)(va_list, flag *);
	va_list arg;
	flag *flags_processed;


	va_start(arg, format);

	i = 0;
	count = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			flags_processed = process_flags(format, i + 1);
			i = flags_processed->index;
			func = check_specifier(&format[i]);
			if (func != NULL)
			{
				count += func(arg, flags_processed);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
