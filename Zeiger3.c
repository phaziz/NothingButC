/*
 ============================================================================
 Name        : Zeiger3.c
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

	char *v;
	int *w;
	float *x;
	double *y;
	void *z;

	printf("%d\t %d\t %d\t %d\t %d\t\n", sizeof(v),sizeof(w), sizeof(x),sizeof(y),sizeof(z));

	int *ptr;
	int wert;

	ptr=&wert;
	printf("Ptr= %p dez= %d\n",ptr, ptr);
	ptr=ptr+10;
	printf("Ptr= %p dez= %d\n",ptr, ptr);
	return EXIT_SUCCESS;
}
