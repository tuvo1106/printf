#include "holberton.h"

/**
 * get_flags - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flags(char s, mods *f)
{
	_Bool modifier = true;

	switch (s)
	{
		case '+':
			f->plus = true;
			break;
		case ' ':
			f->space = true;
			break;
		case '#':
			f->hash = true;
			break;
		default:
			modifier = false;
	}
	return (modifier);
}
