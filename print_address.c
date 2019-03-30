#include "holberton.h"

/**
 * print_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_address(va_list l, mods *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int len = 0;

	(void)f;
	if (!p)
		return (_puts(NIL));
	str = convert(p, 16, 1);
	len += _puts(HEXA) + _puts(str);
	return (len);
}
