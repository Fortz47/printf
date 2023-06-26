#include "main.h"

/**
 * print_ch - print a character
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_ch(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
