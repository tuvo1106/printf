#include "holberton.h"
#include <stdio.h>
#include <limits.h>

void tusAdvancedTester()
{
	printf("START OF TEST\n");
	
	//b
	printf("=====================\n");
	printf("*****BINARY*****\n");
	printf("=====================\n");
	int b = 4312;
	int alen, elen;
	printf("Expected   : %i\n", 1111011);
	_printf("Actual     : %b\n", 123);
	elen = printf("Expected   : %lu\n", 1000011011000);
	alen = _printf("Actual     : %b\n", b);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", 0);
	_printf("Actual     : %b\n", 0);

	//x	
	int h = 32425;
	printf("=====================\n");
	printf("*****HEXA*****\n");	
	printf("=====================\n");
	printf("Expected   : %x\n", 995);
	_printf("Actual     : %x\n", 995);
	alen = printf("Expected   : %x\n", -1);
	elen = _printf("Actual     : %x\n", -1);
	printf("Expected   : %i\n", alen);
	_printf("Actual     : %i\n", elen);
	alen = printf("Expected   : %x\n", 0);
	elen = _printf("Actual     : %x\n", 0);
	printf("Expected   : %x\n", alen);
	_printf("Actual     : %x\n", elen);
	printf("Expected   : %x\n", 1);
	_printf("Actual     : %x\n", 1);
	elen = printf("Expected   : %x\n", h);
	alen = _printf("Actual     : %x\n", h);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %x\n", INT_MAX);
	_printf("Actual     : %x\n", INT_MAX);
	printf("Expected   : %x\n", INT_MIN);
	_printf("Actual     : %x\n", INT_MIN);
	printf("Expected   : %x\n", 0);
	_printf("Actual     : %x\n", 0);

	//X
	h = 224211;
	printf("=====================\n");
	printf("*****HEXA_BIG*****\n");
	printf("=====================\n");
	printf("Expected   : %X\n", h);
	_printf("Actual     : %X\n", h);
	printf("Expected   : %X\n", -1);
	_printf("Actual     : %X\n", -1);
	elen = printf("Expected   : %X\n", 0);
	alen = _printf("Actual     : %X\n", 0);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %X\n", UINT_MAX);
	_printf("Actual     : %X\n", UINT_MAX);
	printf("Expected   : %X\n", INT_MIN);
	_printf("Actual     : %X\n", INT_MIN);
	alen = printf("Expected   : %X\n", 0);
	elen = _printf("Actual     : %X\n", 0);
	printf("Expected   : %X\n", alen);
	_printf("Actual     : %X\n", elen);
	

	//o
	int o = 54352;
	printf("=====================\n");
	printf("*****OCTAL*****\n");
	printf("=====================\n");
	printf("Expected   : %o\n", 2288);
	_printf("Actual     : %o\n", 2288);
	printf("Expected   : %o\n", -991);
	_printf("Actual     : %o\n", -991);
	elen = printf("Expected   : %o\n", h);
	alen = _printf("Actual     : %o\n", h);
	printf("Expected   : %o\n", elen);
	_printf("Actual     : %o\n", alen);
	printf("Expected   : %o\n", INT_MAX);
	_printf("Actual     : %o\n", INT_MAX);
	printf("Expected   : %o\n", INT_MIN);
	_printf("Actual     : %o\n", INT_MIN);
	printf("Expected   : %o\n", 0);
	_printf("Actual     : %o\n", 0);

        //pointers
        printf("=====================\n");
        printf("*****POINTERS*****\n");
        printf("=====================\n");
        void *vp = (void *)0x7ffe637541f0;
        alen = printf("Expected   : %p\n", vp);
        elen = _printf("Actual     : %p\n", vp);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
        vp = NULL;
        printf("Expected   : %p\n", vp);
        _printf("Actual     : %p\n", vp);
	

	//rot13
	printf("=====================\n");
	printf("*****ROT13*****\n");
	printf("=====================\n");
	char *rot = "The quick brown fox jumps over 13 lazy dogs.";
	printf("Expected   : nopqrs\n");
	_printf("Actual     : %R\n", "abcdef");
	printf("Expected   : NOPQRS\n");
	_printf("Actual     : %R\n", "ABCDEF");
	printf("Expected   : Gur dhvpx oebja sbk whzcf bire 13 ynml qbtf.\n");
	_printf("Actual     : %R\n", rot);

	//bigS
	printf("=====================\n");
	printf("*****bigS*****\n");
	printf("=====================\n");
	int len = 0;
	len = _printf("%S", "Holberton\nSchool");
	printf("\n");
	_printf("len = %i\n", len);
	len = _printf("%S", "holber\ton");
	printf("\n");
	_printf("len = %i\n", len);
	len = _printf("%S", NULL);
	printf("\n");
	_printf("len = %i\n", len);
	return;
}

