/*A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. Considerando para este problema que p = 3.14159:*/
#include <stdio.h>


int main (){
	double n, r;
	printf("Digite o raio: ");
	scanf("%lf", &r);
	n = 3.14159;
	printf("AREA: %.4lf", n * (r*r) );
	return 0;
}
