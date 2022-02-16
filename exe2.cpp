#include <stdio.h>

int main (){
	int A, B, SOMA, DIF, PROD, DIV;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &A);
	printf("Digite o segundo numero: ");
	scanf("%d", &B);
	
	SOMA= A + B;
	
	DIF= A - B;
	
	PROD= A * B;
	
	DIV= A / B;
	
	printf("SOMA: %d\n", SOMA);
	printf("DIF: %d\n", DIF);
	printf("PROD: %d\n", PROD);
	printf("DIV: %d\n", DIV);
	/*printf("SOMA: %d\n DIF: %d\n PROD: %d\n DIV: %d\n", SOMA, DIF, PROD, DIV); Voce pode colocar tudo em uma linha para facilitar.*/
	return 0;
}
