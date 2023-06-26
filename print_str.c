#include "main.h"

/**
 */

int print_str(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	while (*str != '\0')
	{
		count += _putchar(*str);
		*str++;
	}

	return (count);
}
