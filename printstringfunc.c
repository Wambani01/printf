#include "main.h"
#include <stddef.h>
/**
 * prnt_string - print string
 * @string: parameter
 * Return: count of printed chars
 */
int prnt_string(char *string)
{
	int n = 0;

	for (n = 0; string[n] != '\0'; n++)
	{
		_putchar(string[n]);
	}
	return (n);
}
/**
 * charfunc - print characters
 * @chr: character being printed
 * Return: count of characters
 */

int charfunc(char chr)
{
	int count = 0;

	if (!chr)
	{
		return(1);
	}
	else
	{
		_putchar (chr);
		count++;
	}
	return (count);
}
/**
 * strfunc - print string
 * @str: print string
 * Return: count of string characters
 */

int strfunc(char *str)
{
	int count = 0;

	if (!str)
	{
		return (1);
	}
	else
	{
		count += prnt_string(str);
	}
	return (count);
}
