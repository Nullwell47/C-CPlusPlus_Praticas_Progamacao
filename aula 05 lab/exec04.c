#include <stdio.h>

int main(){
	
	int quad[10];
	int fat[10];
	int cfat, i, n;

	printf("Vetor dos valores ao quadrado\n");
	for (i=0;i<10;i++){
		quad[i] = i*i;
		printf("quad[%d] = %d\n", i, quad[i]);
	}

	printf("Vetor dos fatoriais\n");
	for (i=0;i<10;i++){
		cfat=1;
		for(n=1;n<=i;n++){
			cfat=cfat*n;
		}
		fat[i] = cfat;
		printf("fat[%d] = %d\n", i, fat[i]);
	}


	return 0;

}
