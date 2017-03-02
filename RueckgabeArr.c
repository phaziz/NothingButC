#include <stdio.h>
#include <stdlib.h>

struct array{int wert[3];};

struct array init_array(void)
{
	struct array z;

	for(int i=0;i< sizeof(struct array)/sizeof(int);i++)
	{
		printf("Wert %d eingeben:", i);
		scanf("%d", &z.wert[i]);
	}

	return z;
}

void output_array(struct array z)
{
	for(int i=0;i<sizeof(struct array)/sizeof(int);i++)
	{
		printf("%d\t",z.wert[i]);
	}
}

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten

	struct array new_array;

	//Array als Rückgabewert in einer Struktur verschachtelt
	new_array=init_array();
	//Call-by-value
	output_array(new_array);

	return EXIT_SUCCESS;
}
