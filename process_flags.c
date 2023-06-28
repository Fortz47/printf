#include "main.h"

/**
 * is_flag_ch - check format flag
 * @c: character to check
 *
 * Return: true or false
 */

bool is_flag_ch(char c)
{
	return(c == '+' || c == ' ' || c == '#');
}

/**
 * process_flags - process format flag
 * @format: format string
 * @index: index of string
 *
 * Return: struct type flag
 */

flag *process_flags(const char *format, int index)
{
	flag *f = malloc(sizeof(flag));


	f->flag1 = 0;
	f->flag2 = 0;
	f->flag3 = 0;
	while (is_flag_ch(format[index]))
	{
		switch (format[index])
		{
			case '+':
				f->flag1 = 1;
				break;
			case ' ':
				f->flag2 = 1;
				break;
			case '#':
				f->flag3 = 1;
				break;
		}
		index++;
	}
	f->index = index;
	return (f);
}
