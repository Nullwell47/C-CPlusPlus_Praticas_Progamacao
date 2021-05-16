/* Exercício: Programa que recebe 10 valores do usuário, passa esses 10 valores para uma
              função que retorna o maior entre eles */

#include <stdio.h>

int main(){
	
	int v[10], i, *q;
	
	printf ("Digite 10 valores\n");
	for(i=0;i<10;i++){
		scanf("%d", &v[i]);
	}
	q=v;
	i=maior(q, 10);
	
	printf("Maior = %d", i);
	
	return 0;
}

int maior(int *p, int tam){
	
	int m, i;
	
	m=p[0];
	for(i=1;i<tam;i++){
		if(p[i] > m){
			m=p[i];
		}
	}
	
	return m;
}
