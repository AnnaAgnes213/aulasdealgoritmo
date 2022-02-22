#include <stdio.h>

int main(){
	char opcao;
	int r, a = 2, b = 5;
	
	do{
		printf("soma\n");
		r=a+b;
		printf("%d\n", r );
		printf("Deseja realizar um novo calculo?");
		scanf("%c", &opcao);
		fflush(stdin);
	}
	while(opcao=='S' || opcao=='s');
}
