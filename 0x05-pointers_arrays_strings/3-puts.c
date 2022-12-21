#include "main.h"
#include <stdio.h>

/**
 * _puts - to print the value of *str from main
 * @str: string pointer
 * printing with putchar
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		putchat(str[c]);
	}
	putchar ('\n');
}
