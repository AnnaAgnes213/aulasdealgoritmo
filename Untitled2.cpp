/*Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. */
#include <stdio.h>

int main(){
	int a, b, x;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	x = a+ b; // comando de atribui��o = ; operador matem�tico +
	
	printf("A soma e equivalente a: %d \n", x);
	
	printf("x = %d\n", &x);//impressao do endere�o de memoria em decimal
	printf("x = %x\n", &x);//impressao de endere�o de memoria em hexadecimal
}
