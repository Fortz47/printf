#include "main.h"

/**
 * print_cent - print %
 * @args: unused
 * @f: pointer to struct flag
 *
 * Return: number of characters printed
 */

int print_cent(va_list args, flag * f __attribute__((unused)))
{
	(void)args;
	return (write(1,"%", 1));
}

/**
 * _strlen - Calculate the length of a string
 * @str: String
 *
 * Return: Length
 **/

int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
