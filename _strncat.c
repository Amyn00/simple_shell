#include "main.h"

/**
 * _strncat - func that concat two str
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenD = 0, lenS = 0;

	while (*(dest + lenD) != '\0')
		lenD++;
	while (*(src + lenS) != '\0' && lenD < 97 && lenS < n)
	{
		*(dest + lenD) = *(src + lenS);
		lenD++;
		lenS++;
	}
	*(dest + lenD) = '\0';
	return (dest);
}
