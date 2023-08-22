#include "main.h"
/**
 * print_num - handles printing of int to stdout
 * @num: int to be printed
 * Return: nothing
 */
void print_num(int num)
{
	if (num < 0)
	{
		print_char('-');
		print_num(-num);
	}
	else if (num > 9)
	{
		print_num(num / 10);
		print_num(num % 10);
	}
	else
	{
		print_char(num + '0');
	}
}
