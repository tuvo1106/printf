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
	int (*printFunc)(va_list, flags_t *);
	va_list arguments;
	flags_t flags = FLAGS_INIT;
	const char *p = format;

	register short len = 0;

	va_start(arguments, format);
	assert(invalidInputs(p));
	for (; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				len += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			printFunc = get_print(*p);
			len += (printFunc)
				? printFunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			len += _putchar(*p);
	}
	_putchar(FLUSH);
	va_end(arguments);
	return (len);
}
