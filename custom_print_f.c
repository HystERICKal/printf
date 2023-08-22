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
	va_start(variable_args_list, format); /*initialise list ptr argument*/
	for (; *format; format++)             /*loop through the characters*/
	{
		if (*format != '%') /*if there's no format specifier*/
		{	write(1, format, 1); /*Write to stdout*/
			count_char++;                     /*Increment the character count*/
		}
		else
		{	format++;            /*Check the next character after % sign*/
			if (*format == '\0') /*End of sentence (NULL terminator)*/
				break;
			if (*format == '%') /*Solves Corner case of double %% sign*/
			{	write(1, format, 1);
				count_char++;
			}
			else if (*format == 'c')
			{	/*Access current variable and pint to the next one*/
				char arg = va_arg(variable_args_list, int);

				write(1, &arg, 1);
				count_char++;
			}
			else if (*format == 's')
			{	char *word = va_arg(variable_args_list, char *);
				int LOW;                                /*Length Of Word counter*/

				for (LOW = 0; word[LOW] != '\0'; LOW++) /*length of second argument*/
					continue;
				write(1, word, LOW);
				count_char = count_char + LOW; /*Second argument + first*/
			}
		}
	}
	va_end(variable_args_list);
	return (count_char);
}
