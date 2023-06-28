#include "main.h"

/**
 * print_num_bin - print a number in binary
 * @n: the number
 * @count: count
 *
 * Return: number of characters printed
 */

int print_num_bin(unsigned int n, int count)
{
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if ((n / 2) > 0)
		count = print_num_bin(n / 2, 0);
	count += _putchar('0' + n % 2);
	return (count);
}

/**
 * print_bin - print a number in binary
 * @args: integer arguments
 * @f: pointer to struct flag
 *
 * Return: number of characters printed
 */

int print_bin(va_list args, flag *f __attribute__((unused)))
{
	int count;

	unsigned int n = va_arg(args, unsigned int);

	count = print_num_bin(n, 0);
	return (count);
}

