#include "main.h"

/**
 * _printf - Prints formated string
 * @format: pointer to string
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	char * create_buff;
	int i;

	va_list frmts;

	create_buff = malloc(1024 * sizeof(char));
	if (create_buff == NULL)
	{
		free(create_buff);
		return (-1);
	}
	va_start(frmts,format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{

			switch (format[i + 1])
			{
				case 'c':
					char c = va_arg(frmts,int);
					_putchar(c);
					i++;
					break;
				case 's':
					char * s = va_arg(frmts,char*);

					_putchars(s);
					i++;
					break;
				case '%':
					_putchar('%');
					i++;
					break;
				case 'd':
					_printint(va_arg(frmts,int));
					i++;
					break;
				case 'i':
					_printint(va_arg(frmts,int));
					i++;
					break;
			}
		}
	}
	_putchar('\n');
	va_end(frmts);
	return (0);
}

