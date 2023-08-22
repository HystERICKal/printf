#include "main.h"
/**
 * d_and_i_dealer - deals with "d" and "i" specifier
 * @spec_list: Declare pointer to arg list
 * Return: nothing
 */
void d_and_i_dealer(va_list spec_list)
{
	int num = va_arg(spec_list, int);

	print_num(num);
}
