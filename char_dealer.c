#include "main.h"
/**
 * char_dealer - deals with "c" specifier
 * @spec_list: Declare pointer to arg list
 * Return: nothing
 */
void char_dealer(va_list spec_list)
{
	char arg = va_arg(spec_list, int);

	write(1, &arg, 1);
}
