#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);


/**
 * struct idfierStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct idfierStruct
{
	char *type;
	int (*printer)(va_list);
} idfierStruct;

#endif
