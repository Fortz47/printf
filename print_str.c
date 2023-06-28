#include "main.h"

/**
 * print_str - prints a string
 * @args: argument list
 * @f: pointer to struct flag
 *
 * Return: number of argument printed
 */

int print_str(va_list args, flag *f __attribute__((unused)))
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
