#include "main.h"

/**
 * _puts - prints string
 * @str: inputs string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (i < 2)
	{
		if (*str == '\0')
			break;
		_putschar(*str);
		str++;
	}
	_putchar('\n');
}
