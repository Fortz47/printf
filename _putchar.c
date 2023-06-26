#include "main.h"

/**
 * _putchar - print a character
 * @c: a character
 *
 * Return: number of characters printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
