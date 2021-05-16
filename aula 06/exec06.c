/* Exercício: Programa que soma duas matrizes de tamanho 3x3 digitadas pelo usuário */

#include <stdio.h>

int main(){
	
	int A[3][3], B[3][3], C[3][3];
	int i, j;

	
	printf("Digite a primeira matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("Primeira matriz digitada\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}

	printf("Digite a segunda matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &B[i][j]);
		}
	}
	
	printf("Segunda matriz digitada\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("Soma das matrizes\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
