#include "main.h"

/**
 * _islower - prints uppercase
 * @c: character to print
 *
 * Return: 0 (if lowercase) and 1 (if uppercase)
 */

int _islower(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);

	return (0);
}
