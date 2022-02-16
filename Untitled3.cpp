#include <stdio.h>

int main(){
	float n1, n2, mp;
	
	printf ("Digite a primeira nota: ");
	scanf ("%f", &n1);
	printf ("Digite a segunda nota: ");
	scanf ("%f", &n2);

	mp = ((n1 * 3.5) + (n2 * 7.5)) / 11;
	
	printf ("A media: %.5f", mp);
	
}
