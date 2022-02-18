/*Leia 3 n�meros de ponto flutuante. Depois, imprima as ra�zes da f�rmula de bhaskara. 
Se for imposs�vel calcular as ra�zes por divis�o por zero ou raiz quadrada de um n�mero negativo, 
apresenta a mensagem �Impossivel calcular� .*/

/*Ra�zes 
  impossivel calcular por divis�ao  0 ou   raiz quadrada de um n�mero negativo*/

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
