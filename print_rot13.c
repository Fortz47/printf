#include "main.h"

/**
 * print_r13 - prints a rot13'ed string
 * @c: char
 *
 * Return: no of characters printed
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
 * print_rot13 - prints a rot13'ed string
 * @args: argument list
 * @f: pointer to struct flag
 *
 * Return: no of characters printed
 */

int print_rot13(va_list args, flag *f __attribute__((unused)))
{
	char c, rotated;

	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	while (*str != '\0')
	{
		c = *str;
		rotated = print_r13(c);
		count += _putchar(rotated);
		str++;
	}
	return (count);
}
