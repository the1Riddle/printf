#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * printTypes - prints special characters
 * @next: character after the %
 * @arg: argument for the indentifier
 *
 * Return: the number of characters printed
 */

int printTypes(char next, va_list arg)
{
	int funcIndex;

	typeStruct func[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"b", print_unsignedToBinary},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_STR},
		{NULL, NULL}
	};

	for (funcIndex = 0; func[funcIndex].type != NULL; funcIndex++)
	{
		if (func[funcIndex].type[0] == next)
			return (func[funcIndex].printer(arg));
	}
	return (0);
}

/**
 * _printf - emulates printf func from standard lib
 * @format: character string composed of zero or more directives
 *
 * Description: produces output according to a format
 * Return: the number of characters printed or,
 * -1 when type is error
 */

int _printf(const char *format, ...)
{
	unsigned int a;
	int typePrinted = 0, charPrinted = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
			charPrinted++;
			continue;
		}
		if (format[a + 1] == '%')
		{
			_putchar('%');
			charPrinted++;
			a++;
			continue;
		}
		if (format[a + 1] == '\0')
			return (-1);

		typePrinted = printTypes(format[a + 1], arg);
		if (typePrinted == -1 || typePrinted != 0)
			a++;
		if (typePrinted > 0)
			charPrinted += typePrinted;
		if (typePrinted == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(arg);
	return (charPrinted);
}
