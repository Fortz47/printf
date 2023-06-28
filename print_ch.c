#include "main.h"

/**
 * print_ch - print a character
 * @args: arguments list
 * @f: pointer to struct flag
 *
 * Return: number of characters printed
 */

int print_ch(va_list args, flag *f __attribute__((unused)))
{
	_putchar(va_arg(args, int));
	return (1);
}
