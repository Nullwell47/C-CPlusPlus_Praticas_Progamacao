#include <stdio.h>

int main(){

	int vet[5], i, soma, media;
	
	/*scanf("%d", &vet[0]);
	scanf("%d", &vet[1]);
	scanf("%d", &vet[2]);
	scanf("%d", &vet[3]);
	scanf("%d", &vet[4]);
	
	soma = vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
	media = soma/5;
	*/
	
	soma = 0;
	for(i=0;i<5;i++){
		scanf("%d", &vet[i]);
		soma = soma + vet[i];
	}
	media=soma/5;

	return 0;

}
