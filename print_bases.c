#include "holberton.h"

/**
 * print_hex - prints a number in hexadecimal base,
 * in lowercase
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex(va_list l, mods *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);

	register short len = 0;

	if (f->hash && *str != '0')
		len += _puts(HEXA);
	len += _puts(str);
	return (len);
}

/**
 * print_hex_big - prints a number in hexadecimal base,
 * in uppercase
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex_big(va_list l, mods *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);

	register short len = 0;

	if (f->hash && *str != '0')
		len += _puts(HEXA);
	len += _puts(str);
	return (len);
}

/**
 * print_binary - prints a number in base 2
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_binary(va_list l, mods *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list l, mods *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);

	register short len = 0;

	if (f->hash && *str != '0')
		len += _putchar('0');
	len += _puts(str);
	return (len);
}
