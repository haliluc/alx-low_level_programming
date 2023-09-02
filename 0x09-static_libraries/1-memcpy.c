#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: copy from
 * @dest: copy to
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
