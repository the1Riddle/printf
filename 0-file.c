#include "main.h"
/**
 * print_char - handles c specifier
 * @arg: argument
 *
 * Return: 0 for success or -1 on failure
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_str - handles s specifier
 * @arg: argument
 * Return: number of character printed
 */
int print_str(va_list arg)
{
	int s = 0;
	char *str = va_arg(arg, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	else if (*str == '\0')
	{
		return (-1);
	}

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}

	return (s);
}
