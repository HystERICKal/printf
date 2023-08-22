#include "main.h"
/**
 * hex_dealer - deals with "x" and "X" specifier
 * @spec_list: Declare pointer to arg list
 * @format_specifier: "x" and "X"
 * Return: nothing
 */
void hex_dealer(va_list spec_list, const char *format_specifier)
{
	unsigned int dec_num = va_arg(spec_list, int);
	int x = 1, y, holder;
	char hex_num[100];

	while (dec_num != 0)
	{
		holder = dec_num % 16;

		if (holder < 10)
			holder = holder + 48;
		else
			holder = holder + 55;
		hex_num[x++] = holder;
		dec_num = dec_num / 16;
	}

	for (y = x - 1; y > 0; y--)
	{
		if (*format_specifier == 'x')
		{
			if (hex_num[y] >= 65 && hex_num[y] <= 90)
				hex_num[y] = hex_num[y] + 32;
			write(1, &hex_num[y], 1);
		}
		else
		{
			write(1, &hex_num[y], 1);
		}
	}
}
