#include "main.h"
#include <stdint.h>

/**
 * print_p - prints an address
 * @args: argument list
 * @f: pointer to struct flag
 *
 * Return: number of argument printed
 */

int print_p(va_list args, flag * f __attribute__((unused)))
{
	int digit, i;
	char buffer[16];

	int count = 0;
	void *ptr = va_arg(args, void *);
	uintptr_t address = (uintptr_t)ptr;
	char *NULL_Buffer = "(nil)(nil)";

	if (ptr == NULL)
	{
		while (count < 8)
			count += _putchar('0');
		/*while (*NULL_Buffer)
		{
			count += _putchar(*NULL_Buffer);
			NULL_Buffer++;
		}*/
		return (count);
	}
	count += _putchar('0');
	count += _putchar('x');
	i = 0;
	while (address > 0)
	{
		digit = address % 16;
		buffer[i++] = digit < 10 ? digit + '0' : digit - 10 + 'a';
		address /= 16;
	}
	while (i > 0)
		count += _putchar(buffer[--i]);
	return (count);
}
