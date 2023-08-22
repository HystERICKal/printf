#include "main.h"
/**
 * oct_dealer - deals with "o" specifier
 * @spec_list: Declare pointer to arg list
 * Return: nothing
 */
void oct_dealer(va_list spec_list)
{
	unsigned int dec_num = va_arg(spec_list, int);
	int oct_num[100];
	int x = 0;
	int j;

	for (; dec_num != 0; x++)
	{
		oct_num[x] = dec_num % 8;
		dec_num = dec_num / 8;
	}

	for (j = x - 1; j >= 0; j--)
		print_num(oct_num[j]);
}
