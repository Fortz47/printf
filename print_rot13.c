#include "main.h"

/**
 */

int print_r13(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ('A' + (c - 'A' + 13) % 26);
	if (c >= 'a' && c <= 'z')
		return ('a' + (c - 'a' + 13) % 26);
	return (c);
}

/**
 */

int print_rot13(va_list args)
{
	char c, rotated;

	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	while (*str != '\0')
	{
		c = *str;
		rotated = r13(c);
		count += _putchar(rotated);
		str++;
	}
	return (count);
}
