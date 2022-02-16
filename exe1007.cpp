#include <stdio.h>

int main(){
	int A, B, C, D, X;
	printf("Digite o primeiro numero: ");
	scanf("%d", &A);
	printf("Digite o segundo numero: ");
	scanf("%d", &B);
	printf("Digite o terceiro numero: ");
	scanf("%d", &C);
	printf("Digite o quarto numero: ");
	scanf("%d", &D);
	
	X = A * B - C * D;
	 printf("DIFERENCA: %d", X);
}
