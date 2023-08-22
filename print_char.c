#include "main.h"
/**
 * print_char - converts num to ASCII
 * @c: ASCII char
 * Return: 0
 */
int print_char(char c)
{
	write(1, &c, 1);
	return (0);
}
