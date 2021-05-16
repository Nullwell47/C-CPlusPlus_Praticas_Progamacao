/* Exercício: Programa que monta uma matriz 2x2 em C de acordo com a regra:
							M[I][J] = I+(I-1)*J */

#include <stdio.h>

#define TAMANHO 10

int main(){
	
	int i, j;
	int mat[2][2];
	
	i=0;
	j=0;
	mat[i][j] = i+(i-1)*j;
	
	i=1;
	j=0;
	mat[i][j] = i+(i-1)*j;
	
	i=0;
	j=1;
	mat[i][j] = i+(i-1)*j;
	
	i=1;
	j=1;
	mat[i][j] = i+(i-1)*j;
	
	printf("%d %d \n%d %d", mat[0][0], mat[0][1], mat[1][0], mat[1][1]);
		
	return 0;
}
