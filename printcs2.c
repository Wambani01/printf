#include <stdarg.h>
#include <stddef.h>
/**
 * print - print elements
 * @format: string of items
 * return : 0 on success
 */
void print(const char* format, ...)
{
    va_list list;
    char chr, *str;
    int i, intgr;
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
                    prnt_string("(null)");
                }
                _putchar(chr);
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
            }
            else if (format[i] == 's')
            {
                str = va_arg(list, char*);
                if(!str)
                {
                    prnt_string("(null)");
                }
                prnt_string(str);
            }
        }
        else
        _putchar(format[i]);
    }
}
