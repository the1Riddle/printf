#include "main.h"
/**
 * print_bin - function that prints the binary representation of a number
 * @n: number to be printed in binary
 * @prin: hold the number of characters printed
 */
void print_bin(unsigned int n, unsigned int *prin)
{
	if (n > 1)
	{
		*prin += 1;
		print_bin(n >> 1, prin);
	}
	_putchar((n & 1) + '0');
}
