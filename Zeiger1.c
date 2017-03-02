/*
 ============================================================================
 Name        : Zeiger1.c
 Author      : René Schülke
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	int x=5;
	int *y;

	printf("Adresse x=%p Wert x=%d\n", &x, x);

	printf("Adresse *y=%p, Wert *y=%d (Unsinn)\n", &y, *y); //ggf. auskommentieren führt bei manchen Systemn zu Programmabstürzen
	printf("\ny=&x;\n\n");

	y=&x;
	printf("Adresse x=%p Wert x=%d\n", &x, x);
	printf("Adresse *y=%p, Wert *y=%d\n", &y, *y);
	printf("\nAdresse, auf die y zeigt, ist %p\n", y);
	printf("und das ist die Adresse von x = %p\n", &x);

	printf("\nACHTUNG!!!\n\n");
	*y=10;
	printf("*y=10\n\n");
	printf("Adresse  x=%p, Wert  x=%d\n", &x, x);
	printf("Adresse *y=%p, Wert *y=%d\n", &y, *y);
	printf("\nAdresse, auf die y zeigt, ist %p\n", y);
	printf("weiterhin die Adresse von x (%p)\n", &x);
	return EXIT_SUCCESS;
}
