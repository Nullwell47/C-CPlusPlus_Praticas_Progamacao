/* Exercício: Complementando o exercício 3. Programa contém uma matriz 10x10,
				  e deve se imprimir o maior de cada linha.
				  Depois, mostra o maior valor da matriz */

#include <stdio.h>

int main(){
	
	int i,j,maior;

	int v[10][10] = {{0, 2, 3, 4, 2, 10, 4, 6, 77, 19}, 
	                 {3, 2, 3, 4, 2, 12, 4, 6, 77, 19},
	                 {1, 2, 3, 400, 2, 14, 4, 6, 77, 19},
	                 {8, 2, 3, 4, 2, 100, 4, 6, 77, 19},
	                 {8, 2, 3, 4, 2, 978, 4, 6, 77, 19},
	                 {2, 2, 3, 4, 2, 10, 4, 6, 77, 19},
	                 {5, 2, 3, 4, 2, 10, 4, 6, 1001, 19},
	                 {3, 2, 3, 4, 2, 10, 4, 6, 77, 19},
	                 {54, 2, 3, 4, 2, 10, 4, 6, 67, 19},
	                 {56, 2, 3, 4, 2, 10, 4, 6, 77, 19}};


	for(i=0;i<10;i++){
		maior=v[i][0];
		for(j=1;j<10;j++){
			if(v[i][j]>maior){
				maior=v[i][j];
			}
		}
		printf("Maior valor da linha %d = %d\n",i, maior);
	}

	maior=v[0][0];
	//Exercício: Por que visitar novamente a posição v[0][0] nos for's abaixo?
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(v[i][j]>maior){
				maior=v[i][j];
			}
		}
	}
	printf("Maior valor da matriz = %d\n", maior);

	return 0;
}
