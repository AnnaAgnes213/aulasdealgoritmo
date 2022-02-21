#include <stdio.h>
 int main(){
 	int A;
 	printf("Digite a idade: ");
 	scanf("%d", &A);
 	
 	if (A <= 10)
 		printf("Crianca");
	 
	 	else if(A <= 18)
	 		printf("Adolescente");
	 
	  		else if(A <= 60)
	 			printf("Adulto");
	
	  				else if(A <= 100)
	 					printf("Idoso");
	
	  					else if(A <= 150)
	 						printf("Zumbi");
	 
	 							else printf("Vampiro");
 }
