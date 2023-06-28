#include "main.h"

/**
 * print_num_dec - print decimal
 * @n: decimal number
 * @count: count
 *
 * Return: number of characters printed
 */

int print_num_dec(int n, int count)
{
	if ((n / 10) > 0)
		count = print_num_dec(n / 10, 0);
	count += _putchar('0' + n % 10);
	return (count);
}

/**
 * print_dec - print decimal
 * @args: argument list
 * @f: pointer to struct flags
 *
 * Return: number of characters printed
 */

int print_dec(va_list args, flag *f)
{
	int n;
	int count = 0;

	n = va_arg(args, int);

	if (f->flag1 && n > 0)
		count += _putchar('+');
	if (!f->flag1 && f->flag2)
		count += _putchar(' ');

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	if (n < 0)
	{
		n = -(n);
		count += _putchar('-');
	}

	count += print_num_dec(n, 0);
	return (count);
}
