#include <stdarg.h>
#include "main.h"
/**
 * _printf - Print c and s
 * @format: data type
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char *chr;
	char *string;
	va_list args;
	va_start(args, format);
	for(i = 0; format[i] != '0'; i++)
	{
		if (format[i] == 37)
		{
			switch(format[i + 1])
				case 'c':
					chr = va_arg(args, int);
					if(chr == NULL)
						{
							chr = "(null)";
							for(c = 0; chr[c] != '\0'; c++)
							{
								_putchar(chr[i]);
							}
						}
					_putchar(chr);
					break;
				case 's':
					string = va_arg(args, char*);
					if(string == NULL)
					{
						string == "(null)";
					}
					for(c = 0; string[c] != '\0'; c++)
					{
						_putchar(string[i]);
					}
					break;
				default:
					i++;
					continue;
		}
		if(format[i + 1] != '\0')
			_putchar(',');
			_putchar(' ');
	}
	va_end(args);
	return 0;
}
int main(void)
{
	char c = 'e';
	char *s = "String";
	_printf("%c%s", c, s);
	return (0);
}
