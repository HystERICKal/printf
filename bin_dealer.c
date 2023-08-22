#include "main.h"
/**
 * bin_dealer - deals with "b" specifier
 * @spec_list: Declare pointer to arg list
 * Return: nothing
 */
void bin_dealer(va_list spec_list)
{
	int dec_num = va_arg(spec_list, int);
	int bin_num = 0, x = 1, temp;

	while (dec_num != 0)
	{
		temp = dec_num % 2;
		dec_num /= 2;
		bin_num += temp * x;
		x *= 10;
	}

	print_num(bin_num);
}
