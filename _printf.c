#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	va_list arguments;
	flags_t flags = FLAGS_INIT;
	const char *p = format;

	register short count = ZERO;

	va_start(arguments, format);
	assert(p);
	assert(*p != '%' || *(p + 1));
	assert(*p != '%' || *(p + 1) != ' ' || *(p + 2));
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(FLUSH);
	va_end(arguments);
	return (count);
}
