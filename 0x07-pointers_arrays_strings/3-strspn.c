#include "main.h"

/**
 * _strspn - returns the number of bytes of the initial segement of s
 * @s: string to be checked
 * @accept: string to be checked for
 *
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int  a, b;
	char *d;

	d = s;
	while (*accept != '\0')
	{
		s = d;
		while ((*s != ' ') || (*s != ','))
		{
			if (*s == *accept)
			{
				break;
			}
			else
				continue;
			s++;
		}
		if (*s != *accept)
		{
			a = 0;
			break;
		}
		accept++;
	}
	if (*accept == '\0')
	{
		b = 0;
		s = d;
		while ((*s != ' ') || (*s != ','))
			b++;
		a = b;
	}
	return (a);
}
