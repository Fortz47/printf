#include "main.h"

/**
 * print_cent - print %
 * @args: unused
 * @f: pointer to struct flag
 *
 * Return: number of characters printed
 */

int print_cent(va_list args, flag *f __attribute__((unused)))
{
	(void)args;
	return (write(1,"%", 1));
}
