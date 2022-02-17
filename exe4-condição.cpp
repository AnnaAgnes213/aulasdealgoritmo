/*Leia 4 valores inteiros A, B, C, D. A sequir, se B for maior do que C 
e D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D,
ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos",
enão escrever 'Valores nao aceitos".
CONDIÇÃO 1: B for maior do que C e se D for maior do que A
CONDIÇÃO 2: soma de C com D for maior que a soma de A e B
CONDIÇÃO 3: C é positivo
CONDIÇÃO 4: D é postivo
CONDIÇÃO 5: A é par*/
#include <stdio.h>

int main(){
	int A, B, C, D, X, Y;
	printf("Digite valor A: ");
	scanf("%d", &A);
	printf("Digite valor B: ");
	scanf("%d", &B);
	printf("Digite valor C: ");
	scanf("%d", &C);
	printf("Digite valor D: ");
	scanf("%d", &D);
	
	X = C + D;
	Y = A + B;
	
	if (B > C && D > A && (C + D ) > (A + B ) && C > 0 && D > 0 && A%2==0)
		printf("Valores aceitos");
	else printf("Valores nao aceitos");
	return 0;
}
