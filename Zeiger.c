#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten

	short int *p;		//deklariert einen Zeiger-Variable auf short int
	short int m,n=10;	//Variablen vom Typ short int

	p=&n;				//Die Speicheradresse von n wird in p gespeichert, Damit zeigt p auf n
	m=*p;				//Der Inhalt der Variable, auf die p zeigt, wir m zugewiesen => m=10

	printf("m= %d beginnt bei %d, n=%d beginnt bei %d, p=%d", m,&m, n,&n,p);

	int *p1;
	p1=NULL;		//Zeiger die auf keine Variable zeigen, sind mit NULL (0) zu initialisieren
	if(p1!=NULL)
	{
		*p1=17;
		printf("\np1 = %d - Adresse: %d", *p1, p1);
	}

	int *izeiger;
	char *ichar;
	struct person *angaben;

	int *iptr1, i,j;
	int *iptr2 = &j;
	char *cptr = "Hallo";
	iptr1= &i;
	iptr2=iptr1;
	*iptr1 = *iptr2;
	*iptr1=10;
	*iptr1=100;
	printf("\nWert: %d", *iptr2);
	printf("\niptr1: %d iptr2: %d", iptr1, iptr2);

	return EXIT_SUCCESS;
}
