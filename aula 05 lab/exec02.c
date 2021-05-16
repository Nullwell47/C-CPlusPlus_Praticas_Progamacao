#include <stdio.h>

int main(){
	
	int vet[2];
	int i, temp;

	printf("Digite dois valores\n");
	
	for(i=0;i<2;i++){
		scanf("%d", &vet[i]);
	}

	if(vet[0] > vet[1]){
		temp = vet[0];
		vet[0] = vet[1];
		vet[1] = temp;
	}

	printf("Vetor ordenado:\n");
	for(i=0;i<2;i++){
		printf("%d - ", vet[i]);
	}

	return 0;

}
