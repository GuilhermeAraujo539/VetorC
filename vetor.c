#include <stdio.h>
#include <stdlib.h>

void main(){

int vetor[10];
int i;

for (i=0;i<10;i++){

	printf ("selecione o numero para o vetor%d:\n",i);
	scanf ("%d",&vetor[i]);
}

for (i=0;i<10;i++){
	(vetor[i]= vetor[i]*2);
	printf ("O dobro do vetor %d é de:%d\n",i,vetor[i]);


}


}
