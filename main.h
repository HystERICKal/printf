#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);

void format_spec(va_list spec_list, const char *format_specifier);
void perc_dealer(const char *format_specifier);
void char_dealer(va_list spec_list);
int str_dealer(va_list spec_list);
int Ascii_conv(int numb);
void d_and_i_dealer(va_list spec_list);
void print_num(int num);
void print_num_unsigned(unsigned int num);
int print_char(char c);
void bin_dealer(va_list spec_list);
void unsigned_dealer(va_list spec_list);
void oct_dealer(va_list spec_list);
void hex_dealer(va_list spec_list, const char *format_specifier);

#endif
