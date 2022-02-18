/*Leia 3 números de ponto flutuante. Depois, imprima as raízes da fórmula de bhaskara. 
Se for impossível calcular as raízes por divisão por zero ou raiz quadrada de um número negativo, 
apresenta a mensagem “Impossivel calcular” .*/

/*Raízes 
  impossivel calcular por divisçao  0 ou   raiz quadrada de um número negativo*/

# include <stdio.h>
# include <math.h>

int main()
{
    double A, B, C, X1, X2, R1;
    printf ("Entre com o valor de A: ");
    scanf ("%lf", &A);
    printf ("Entre com o valor de B: ");
    scanf ("%lf", &B);
    printf ("Entre com o valor de C: ");
    scanf ("%lf", &C);
    
	R1 = B*B-4*A*C;
    X1 = (-B + sqrt(R1))/(2*A);
    X2 = (-B - sqrt(R1))/(2*A);
    
	if(R1 > 0 && A != 0){
		printf ("valor de X1 e %.05lf\n", X1);
		printf ("valor de X2 e %.05lf\n", X2);
	}
	else printf("Impossivel calcular");
	
}
