#include <stdio.h>

int maior (int n1, int n2, int n3);

int main(){
	
	int n1, n2, n3, r;
	
	printf("Digite 3 valores\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	r = maior(n1, n2, n3);
	
	printf("Retorno da funcao: %d", r);
	
	return 0;
}

int maior (int n1, int n2, int n3){
	
	int m;
	
	m = n1;
	
	if(n2 > m){
		m = n2;
	}
	
	if(n3 > m){
		m = n3;
	}
	
	if(m==n1 && m==n2) return -1;
	if(m==n3 && m==n2) return -1;
	if(m==n1 && m==n3) return -1;
	
	return m;
	
}
