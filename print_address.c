#include "holberton.h"

/**
 * print_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);
<<<<<<< HEAD

	register int count = ZERO;

	(void)f;
	if (!p)
		return (_puts(NIL));
=======
	register int count = 0;

	(void)f;
	if (!p) return (_puts(NIL));
>>>>>>> d029112f31ce2ec2648184b4d758299168743153
	str = convert(p, 16, 1);
	count += _puts(HEXA) + _puts(str);
	return (count);
}
