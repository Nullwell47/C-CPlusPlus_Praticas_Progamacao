#include <stdio.h>

int main(){

	int n;
	
	do{
		printf("Digite um numero impar\n");
		scanf("%d", &n);
	}while(n%2!=1);

	return 0;

}
