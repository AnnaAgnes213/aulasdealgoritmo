#include <stdio.h>
 int main(){
 	int idade;
	printf("Digite a idade: ");
	scanf("%d", &idade);
	switch(idade){
		case 0 ... 10: 
			printf("crianca\n");
		break;
		case 11 ... 18: 
			printf("adulto\n");
		break;
		case 19 ... 60: 
			printf("idoso\n");
		break;
		case 61 ... 100: 
			printf("zumbi\n");
		break;
		default:
			printf("idade invalida");
	}
 }
