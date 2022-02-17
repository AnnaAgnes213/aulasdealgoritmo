#include <stdio.h>

int main(){
	int a, b;
	printf("Coloque o numero para ser verificado: ");
	scanf("%d", &a);
	printf("Coloque o segundo numero: ");
	scanf("%d", &b);
	
	if(a%2==0 && b%2==0){
		printf("Uhuul\n");
	}
	else if(a%2==0 && b%2==1){
		printf("u\n");
	}
	else if(a%2==1 && b%2==0){
		printf("h\n");
	}
	else if (a%2==1 && b%2==0){
		printf("poxa\n");
	}
	
	return 0;
}
