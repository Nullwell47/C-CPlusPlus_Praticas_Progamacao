#include <stdio.h>

int main(){
	
	int vet[3];
	int i, temp;

	printf("Digite tres valores\n");
	
	for(i=0;i<3;i++){
		scanf("%d", &vet[i]);
	}

	if(vet[0] > vet[1]){
		temp = vet[0];
		vet[0] = vet[1];
		vet[1] = temp;
	}

	if(vet[1] > vet[2]){
		temp = vet[1];
		vet[1] = vet[2];
		vet[2] = temp;
	}

	if(vet[0] > vet[1]){
		temp = vet[0];
		vet[0] = vet[1];
		vet[1] = temp;
	}

	if(vet[1] > vet[2]){
		temp = vet[1];
		vet[1] = vet[2];
		vet[2] = temp;
	}

	printf("Vetor ordenado:\n");
	for(i=0;i<3;i++){
		printf("%d - ", vet[i]);
	}

	return 0;

}
