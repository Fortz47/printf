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
	int (*func)(va_list);
	va_list arg;


	va_start(arg, format);

	i = 0;
	count = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			func = check_specifier(&format[i + 1]);
			if (func != NULL)
			{
				count += func(arg);
				i++;
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
