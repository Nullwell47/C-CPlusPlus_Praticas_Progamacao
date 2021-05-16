/* Exercício: Matriz dada no programa com os valores:
							|6 1 4|
							|8 7 1|
							|1 1 2|
					Imprime-se na tela o maior valor de cada linha. */

#include <stdio.h>

int main(){
	
	int v[3][3] = {{6, 1, 4}, {8, 7, 1}, {1, 1, 2}};
	int i, j;
	int maior;
	
	i=0;
	maior=v[i][0];
	for(j=1;j<3;j++){
		if(v[i][j]>maior){
			maior=v[i][j];
		}
	}
	printf("Maior valor da linha %d = %d\n",i, maior);
	
	i=1;
	maior=v[i][0];
	for(j=1;j<3;j++){
		if(v[i][j]>maior){
			maior=v[i][j];
		}
	}
	printf("Maior valor da linha %d = %d\n",i, maior);

	i=2;
	maior=v[i][0];
	for(j=1;j<3;j++){
		if(v[i][j]>maior){
			maior=v[i][j];
		}
	}
	printf("Maior valor da linha %d = %d\n",i, maior);
		
	return 0;
}
