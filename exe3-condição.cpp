#include <stdio.h>

int main (){
	int A, B, C;
	
	printf("Digite a primeira nota: ");
	scanf("%d", &A);
	printf("Digite a segunda nota: ");
	scanf("%d", &B);
	
	C = (A + B)/2;
	
	if(C >= 9 )
		printf("%d Aprovado!", C);
		else printf("%d Reprovado!", C);
	return 0;
}
