#include "main.h"
/**
 * print - print elements
 * @format: string of items
 * return : 0 on success
 */
int _printf(const char* format, ...)
{
    va_list list;
    char chr;
    char *str;
    int i = 0, count = 0, strl = 0, ccount = 0, intgr = 0;
    va_start(list, format);

    for(i = 0; format[i] != '\0'; i++)
    {
        if(format[i] == 37)
        {
            i++;
            if(format[i] == 'c')
            {
                chr = va_arg(list, int);
                if(!chr)
                {
                    ccount = prnt_string("(null)");
		    count = count + ccount;
                }
                else
		{
			_putchar(chr);
			count++;
		}
            }
            else if (format[i] == 'd')
            {
                intgr = va_arg(list, int);
                if(intgr < 10)
                {
                    _putchar(intgr + '0');
                }
            }
            else if(format[i] == '%')
            {
                _putchar('%');
		count++;
            }
            else if (format[i] == 's')
            {
                str = va_arg(list, char*);
                if(!str)
                {
                    ccount = prnt_string("(null)");
		    count = count + ccount;
                }
		else
		{
			strl = prnt_string(str);
			count = count + strl;
		}
            }
        }
        else
	{
		_putchar(format[i]);
		count++;
	}
    }
    va_end(list);
    return (count);
}
