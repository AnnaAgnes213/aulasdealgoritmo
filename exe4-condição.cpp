/*Leia 4 valores inteiros A, B, C, D. A sequir, se B for maior do que C 
e D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D,
ambos, forem positivos e se a vari�vel A for par escrever a mensagem "Valores aceitos",
en�o escrever 'Valores nao aceitos".
CONDI��O 1: B for maior do que C e se D for maior do que A
CONDI��O 2: soma de C com D for maior que a soma de A e B
CONDI��O 3: C � positivo
CONDI��O 4: D � postivo
CONDI��O 5: A � par*/
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
