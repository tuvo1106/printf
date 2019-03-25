#include "holberton.h"
#include <stdio.h>
#include <limits.h>

void tusSuperAdvanced()
{
	printf("START OF TEST\n");

	printf("=====================\n");
	printf("*****PLUS*****\n");
	printf("=====================\n");
	char b = 'a';
	int j = 42;
	int k = -324;
	int z = 0;
	int alen = 0, elen = 0;
	printf("Expected   : %+i\n", j);
	_printf("Actual     : %+i\n", j);
	printf("Expected   : %+i\n", k);
	_printf("Actual     : %+i\n", k);
	printf("Expected   : %+i\n", z);
	_printf("Actual     : %+i\n", z);
	elen = printf("Expected   : %+i\n", k);
	alen = _printf("Actual     : %+i\n", k);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %+i\n", j);
	alen = _printf("Actual     : %+i\n", j);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);

	printf("=====================\n");
	printf("*****SPACE*****\n");
	printf("=====================\n");
	printf("Expected   : % i\n", j);
	_printf("Actual     : % i\n", j);
	printf("Expected   : % i\n", j);
	_printf("Actual     : % i\n", j);
	printf("Expected   : % i\n", k);
	_printf("Actual     : % i\n", k);
	printf("Expected   : % i\n", z);
	_printf("Actual     : % i\n", z);
	elen = printf("Expected   : % i\n", k);
	alen = _printf("Actual     : % i\n", k);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : % i\n", j);
	alen = _printf("Actual     : % i\n", j);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);

	printf("=====================\n");
	printf("*****HASHTAGS*****\n");
	printf("=====================\n");
	int h = 0xf9;
	int o = 0213;
	printf("Expected   : %#x\n", h);
	_printf("Actual     : %#x\n", h);
	printf("Expected   : %#o\n", o);
	_printf("Actual     : %#o\n", o);
	printf("Expected   : %#X\n", h);
	_printf("Actual     : %#X\n", h);
	printf("Expected   : %#o\n", o);
	_printf("Actual     : %#o\n", o);
	elen = printf("Expected   : %#x\n", h);
	alen = _printf("Actual     : %#x\n", h);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %#X\n", o);
	alen = _printf("Actual     : %#X\n", o);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);

	printf("=====================\n");
	printf("*****COMBOS*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %   %  %d\n", INT_MAX);
	alen = _printf("Actual     : %   %  %d\n", INT_MAX);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %#x\n", z);
	_printf("Actual     : %#x\n", z);

	printf("=====================\n");
	printf("*****NUMBER*****\n");
	printf("=====================\n");
	char a = 'a';
	char *str = "abc";
	int i = 98;
	char *longStr = "defghijklm";
	printf("Expected   : %5c\n", 'a');
	_printf("Actual     : %5c\n", 'a');
	printf("Expected   : %5s\n", str);
	_printf("Actual     : %5s\n", str);
	elen = printf("Expected   : %5s\n", longStr);
	alen = _printf("Actual     : %5s\n", longStr);
	printf("Expected   : %5i\n", i);
	_printf("Actual     : %5i\n", i);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
}
