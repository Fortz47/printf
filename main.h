#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct flags - struct type flag
 * @index: index
 * @flag1: flag1
 * @flag2: flag2
 * @flag3: flag3
 */

typedef struct flags
{
	int index;
	int flag1;
	int flag2;
	int flag3;
} flag;

/**
 * struct func - struct func with type
 * @ch: pointer to argument
 * @f: pointer function associated with argument
 */

typedef struct func
{
	char *ch;
	int (*f)(va_list, flag *);
} func_t;


int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list, flag *);
int print_ch(va_list args, flag *);
int print_str(va_list args, flag *);
int print_cent(va_list args, flag *);
int print_dec(va_list args, flag *f);
int print_bin(va_list args, flag *);
int print_unsigned_int(va_list args, flag *);
int print_octal(va_list args, flag *);
int print_hex_lower(va_list args, flag *);
int print_hex_upper(va_list args, flag *);
int print_S(va_list args, flag *);
int print_p(va_list args, flag *);
int print_str_rev(va_list args, flag *);
int print_rot13(va_list args, flag *);

flag *process_flags(const char *format, int index);
int is_flag_ch(char c);

#endif
