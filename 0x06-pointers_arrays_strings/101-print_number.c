#include "main.h"

/**
 * print_number - print numbers char
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < a)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != a)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 1o) + '0');
}
