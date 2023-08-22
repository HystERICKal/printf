#include "main.h"
/**
 * unsigned_dealer - deals with "u" specifier
 * @spec_list: Declare pointer to arg list
 * Return: nothing
 */
void unsigned_dealer(va_list spec_list)
{
	unsigned int num = va_arg(spec_list, unsigned int);

	print_num_unsigned(num);
}
