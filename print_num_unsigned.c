#include "main.h"
/**
 * print_num_unsigned - handles printing of unsigned int to stdout
 * @num: int to be printed
 * Return: nothing
 */
void print_num_unsigned(unsigned int num)
{
	if (num > 9)
	{
		print_num(num / 10);
		print_num(num % 10);
	}
	else
	{
		print_char(num + '0');
	}
}
