#include "main.h"

/**
 * print_num_oct - print a number in oct
 * @n: number
 * @count: count
 *
 * Return: number of character printed
 */

int print_num_oct(unsigned int n, int count)
{
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if ((n / 8) > 0)
		count = print_num_oct(n / 8, 0);
	count += _putchar('0' + n % 8);
	return (count);
}

/**
 * print_octal - print a number in oct
 * @args: argument list
 * @f: pointer to struct flag
 *
 * Return: number of argument printed
 */

int print_octal(va_list args, flag *f)
{
	int count = 0;

	unsigned int n = va_arg(args, unsigned int);

	if (f->flag3)
	{
		count += _putchar('0');
	}
	count += print_num_oct(n, 0);
	return (count);
}
