#include "main.h"
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
 * @char: character being printed
 * Return: count of characters
 */

int charfunc(char chr)
{
	int count = 0;

	if (!chr)
	{
		count += prnt_string("(null)");
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
		count += prnt_string("(null)");
	}
	else
	{
		count += prnt_string(str);
	}
	return (count);
}
