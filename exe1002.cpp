/*A fórmula para calcular a área de uma circunferência é: area = p . raio2. Considerando para este problema que p = 3.14159:*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159 /*Costantes são escritas em letras maiusculas.
Constantes não mudam seu valor durante o código.*/


int main (){
	double n, r;
	printf("Digite o raio: ");
	scanf("%lf", &r);
	n = PI;
	printf("AREA: %.4lf", n * pow(r,2) );
	return 0;
}
