/*A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. Considerando para este problema que p = 3.14159:*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159 /*Costantes s�o escritas em letras maiusculas.
Constantes n�o mudam seu valor durante o c�digo.*/


int main (){
	double n, r;
	printf("Digite o raio: ");
	scanf("%lf", &r);
	n = PI;
	printf("AREA: %.4lf", n * pow(r,2) );
	return 0;
}
