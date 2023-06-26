#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 */

typedef struct func
{
	char *ch;
	int (*f)(va_list);
} func_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);
int print_ch(va_list args);
int print_str(va_list args);
int print_cent(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_S(va_list args);
int print_p(va_list args);
int print_str_rev(va_list args);
int print_rot13(va_list args);


#endif
