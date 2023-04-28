#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR (va_list arg);


/**
 * struct typeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct typeStruct
{
	char *type;
	int (*printer)(va_list);
} typeStruct;

#endif
