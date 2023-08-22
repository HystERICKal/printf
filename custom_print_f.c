#include "main.h"
/**
 * _printf - customised printf
 * @format: Everything under ""
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int count_char = 0;         /*counts the characters printed*/
	va_list variable_args_list; /*declare pointer to the arg list*/

	if (format == NULL)         /*check if it exists*/
		return (-1);
	va_start(variable_args_list, format);        /*initialise list ptr argument*/
	for (; *format && *format != '\0'; format++) /*loop through the characters*/
	{
		if (*format != '%') /*if there's no format specifier*/
		{
			write(1, format, 1); /*Write to stdout*/
			count_char++;        /*Increment the character count*/
		}
		else
		{
			format++;            /*Check the next character after % sign*/
			if (*format == '\0') /*End of sentence (NULL terminator)*/
				break;

			format_spec(variable_args_list, format);
			count_char++;

			if (*format == 's')
			{
				int LOW = str_dealer(variable_args_list);

				count_char = count_char + LOW;
			}
		}
	}
	va_end(variable_args_list);
	return (count_char);
}

/**
 * format_spec - checks what format specifier is passed in
 * @spec_list: Declare pointer to arg list
 * @format_specifier: "c,d,i,%"
 * Return: nothing
 */
void format_spec(va_list spec_list, const char *format_specifier)
{
	if (*format_specifier == '%')
		perc_dealer(format_specifier);

	else if (*format_specifier == 'c')
		char_dealer(spec_list);

	else if (*format_specifier == 'd' || *format_specifier == 'i')
		d_and_i_dealer(spec_list);

	else if (*format_specifier == 'b')
		bin_dealer(spec_list);

	else if (*format_specifier == 'u')
		unsigned_dealer(spec_list);

	else if (*format_specifier == 'o')
		oct_dealer(spec_list);
	else if (*format_specifier == 'x' || *format_specifier == 'X')
		hex_dealer(spec_list, format_specifier);
}
