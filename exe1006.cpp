#include <stdio.h>

int main (){
	float a, b, c, n1, n2, n3, mp;
	
	printf("Digite a nota 1: ");
	scanf("%f", &a);
	printf("Digite a nota 2: ");
	scanf("%f", &b);
	printf("Digite a nota 3: ");
	scanf("%f", &c);
	
	n1= 2;
	n2= 3;
	n3= 5;
	mp = (a * n1 + b * n2 + c * n3)/ 10;
	
	printf("MEDIA: %.1f", mp);
}
