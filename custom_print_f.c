#include "main.h"
/**
 * _printf - customised printf
 * @format: Everything under ""
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int count_char = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						char c = va_arg(args, int);

						write(1, &c, 1);
						count_char++;
					}
					break;
				case 's':
					{
					char *str = va_arg(args, char *);

					while (*str != '\0')
					{
						write(1, str, 1);
						str++;
						count_char++;
					}
					}
					break;
				case '%':
					write(1, "%", 1);
					count_char++;
					break;
				default:
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count_char++;
		}
		format++;
	}
	va_end(args);
	return (count_char);
}
