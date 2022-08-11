#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int count = 0, i;

	va_list data;
	va_start(data, format);

	for (i = 0; format[i] != '\0' i++)
	{
		if(format[i] != '%')
		{
		count = count + _putchar(format[i])
		}
		else if (format[i] != '%'
	}
	return (count);
}
