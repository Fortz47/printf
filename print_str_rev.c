#include "main.h"

/**
 * print_str_rev - prints string in reverse
 * @args: argument list
 *
 * Return: number of argument printed
 */

int print_str_rev(va_list args)
{
	int count = 0;
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
		i++;
	while (i != 0)
		count += _putchar(str[i -= 1]);

	return (count);
}
