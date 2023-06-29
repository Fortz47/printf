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
	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
