#include "main.h"

/**
 * more numbers - print from number 0 to 14 10 times
 * Return:void
 */

void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
	for (j = 0; j <= 14; j++)
	{
		_putchar('1');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}

}
