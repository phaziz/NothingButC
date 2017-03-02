/*
 ============================================================================
 Name        : ArrayFunkt.c
 Author      : René Schülke
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct array{
	int wert[3];
};

void funktion(int feld[], int MAX)
{
	printf("\nIn der Funk\n");
	for(int i=0;i<MAX;i++)
	{
		printf("%d; ", feld[i]);
	}
	for(int i=0;i<10;i++)
	{
		feld[i]=feld[i]+1;
	}
	printf("\nIn der Funk\n");
	for(int i=0;i<MAX;i++)
	{
		printf("%d; ", feld[i]);
	}
	printf("\n");
}

void output_array(struct array z)
{
	printf("\nÜbergabe als Struktur vorher\n");
	for(int i=0;i<sizeof(struct array)/sizeof(int);i++)
	{
		printf("%d\t",z.wert[i]);
		z.wert[i]=z.wert[i]+1;
	}

	printf("\nÜbergabe als Struktur nacher\n");
	for(int i=0;i<sizeof(struct array)/sizeof(int);i++)
	{
		printf("%d\t",z.wert[i]);
	}
	printf("\n");
}
int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten

	int val[10];
	for(int i=0;i<10;i++)
	{
		val[i]=i+1;
	}
	printf("vor der Funkt\n");
	for(int i=0;i<10;i++)
	{
		printf("%d; ", val[i]);
	}

	//Call-by-Reference --> Übergabe einer Referenz auf das Element
	funktion(val,10);
	printf("nach der Funkt\n");
		for(int i=0;i<10;i++)
		{
			printf("%d; ", val[i]);
		}

	struct array new_array;
	new_array.wert[0]=10;
	new_array.wert[1]=20;
	new_array.wert[2]=30;
	printf("\nvor der Strukturübergabe\n");
	for(int i=0;i<3;i++)
	{
		printf("%d; ", new_array.wert[i]);
	}
	//Call-by-Value --> Übergabe einer Kopie des Elementes
	output_array(new_array);
	printf("nach der Strukturübergabe\n");
	for(int i=0;i<3;i++)
	{
		printf("%d; ", new_array.wert[i]);
	}
	return EXIT_SUCCESS;
}
