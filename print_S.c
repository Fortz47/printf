#include "main.h"

/**
 * print_S - print the string
 * @args: string argument
 *
 * Return: number of characters printed
 */

int  print_S(va_list args)
{
	char *s;
	int count;

	count = 0;
	s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	while (*s)
	{
		if ((*s > 0 && *s < 32) || *s >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			_putchar((*s >> 4) > 9 ? (*s >> 4) - 10 + 'A' : (*s >> 4) + '0');
			count++;
			_putchar((*s & 0x0F) > 9 ? (*s & 0x0F) - 10 + 'A' : (*s & 0x0F) + '0');
			count++;
		}
		else
			count += _putchar(*s);
		s++;
	}
	return (count);
}
