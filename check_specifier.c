#include "main.h"

/**
 */

int (*check_specifier(const char *ch))(va_list)
{
	int i;

	func_t conv[] = {
		{"c", print_ch},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_dec},
		{"i", print_dec},
		{"b", print_bin},
		{"u", print_unsigned_int},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{"S", print_S},
		{"p", print_p},
		{"r", print_str_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};

		for (i = 0; conv[i].ch; i++)
		{
			if (*ch == *(conv[i].ch))
				return (conv[i].f);
		}
	return (NULL);
}
