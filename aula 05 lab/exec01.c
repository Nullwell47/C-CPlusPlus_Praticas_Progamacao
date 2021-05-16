#include <stdio.h>

int main(){
	
	int vet[10] = {2, 3, 6, 5, 11, 3, 10, 12, 11, 10};
	int i;

	printf("Ordem direta\n");
	
	for(i=0;i<10;i++){
		printf("%d - ", vet[i]);
	}

	printf("\nOrdem inversa\n");
	
	for(i=9;i>=0;i--){
		printf("%d - ", vet[i]);
	}

	return 0;

}
