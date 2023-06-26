#include "main.h"
#include <stdint.h>

/**
 */

int print_p(va_list args)
{
	int digit, i;
	char buffer[16];

	int count = 0;
	void *ptr = va_arg(args, void *);

	uintptr_t address = (uintptr_t)ptr;

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
