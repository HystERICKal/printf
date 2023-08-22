#include "main.h"
/**
 * str_dealer - deals with "s" specifier
 * @spec_list: Declare pointer to arg list
 * Return: word count of second argument
 */
int str_dealer(va_list spec_list)
{
	char *word = va_arg(spec_list, char *);
	int LOW; /*Length Of Word counter*/

	for (LOW = 0; word[LOW] != '\0'; LOW++)
		continue;
	write(1, word, LOW);
	return (LOW);
}
