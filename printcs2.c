#include "main.h"
/**
 * print - print elements
 * @format: string of items
 * return : 0 on success
 */
int _printf(const char *format, ...)
{
	va_list list;
	char chr;
	char *str;
	int i = 0, count = 0;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 37)
		{
			i++;
			if (format[i] == 'c')
			{
				chr = va_arg(list, int);
				count += charfunc(chr);
			}
			else if (format[i] == '%')
			{
				count += prnt_string("%");
			}
			else if (format[i] == 's')
			{
				str = va_arg(list, char*);
				count += strfunc(str);
			}
			else
			{
				count += charfunc('%');
				count += charfunc(format[i]);
			}
		}
		else
		{
			count += charfunc(format[i]);
		}
	}
	va_end(list);
	return (count);
}

