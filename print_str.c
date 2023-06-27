#include "main.h"

/**
 * print_str - prints a string
 * @args: argument list
 *
 * Return: number of argument printed
 */

int print_str(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
