/*Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. */
#include <stdio.h>

int main(){
	int a, b, x;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	x = a+ b; // comando de atribuição = ; operador matemático +
	
	printf("A soma e equivalente a: %d \n", x);
	
	printf("x = %d\n", &x);//impressao do endereço de memoria em decimal
	printf("x = %x\n", &x);//impressao de endereço de memoria em hexadecimal
}
