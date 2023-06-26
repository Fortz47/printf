#include "main.h"

/**
 * print_num_unDec - print unsigned int
 * @n: unsigned int
 * @count: count
 *
 * Return: number of characters printed
 */

int print_num_unDec(unsigned int n, int count)
{
	if ((n / 10) > 0)
		count = print_num_unDec(n / 10, 0);
	count += _putchar('0' + n % 10);
	return (count);
}

/**
 * print_unsigned_int - print unsigned int
 * @args: argument list
 *
 * Return: number of characters printed
 */

int print_unsigned_int(va_list args)
{
	unsigned int n;
	int count = 0;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	count += print_num_unDec(n, 0);
	return (count);
}

