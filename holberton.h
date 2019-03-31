#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <stdbool.h>

/* macros */
#define FLUSH -1
#define PF_INIT {false, false, false}
#define NIL "(nil)"
#define HEXA "0x"
#define NULL_STRING "(null)"
#define NUL '\0'
#define KILOBYTE 1024
#define ABS(x) (((x) <  0) ? -(x) : (x))

/**
 * struct modifiers - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct modifiers
{
	_Bool plus;
	_Bool space;
	_Bool hash;
} mods;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, mods *f);
} ph;

/* print_nums */
int print_int(va_list l, mods *f);
void print_number(int n);
int print_unsigned(va_list l, mods *f);
int count_digit(int i);

/* print_bases */
int print_hex(va_list l, mods *f);
int print_hex_big(va_list l, mods *f);
int print_binary(va_list l, mods *f);
int print_octal(va_list l, mods *f);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, mods *);

/* get_flags */
int get_flags(char s, mods *f);

/* print_alpha */
int print_string(va_list l, mods *f);
int print_char(va_list l, mods *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, mods *f);
int print_rev(va_list l, mods *f);
int print_bigS(va_list l, mods *f);
_Bool isNonAlphaNumeric(char c);

/* print_address */
int print_address(va_list l, mods *f);

/* print_percent */
int print_percent(va_list l, mods *f);

/* assertions */
_Bool invalidInputs(const char *p);

/* unit_tests */
void tusBasicTester(void);
void tusAdvancedTester(void);
void tusSuperAdvanced(void);

#endif
