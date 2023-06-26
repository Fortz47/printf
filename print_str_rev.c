#include "main.h"

/**
 */

int print_str_rev(va_list args)
{
	int count = 0;
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
		i++;
	while (i != 0)
		count += _putchar(str[i -= 1]);

	return (count);
}
