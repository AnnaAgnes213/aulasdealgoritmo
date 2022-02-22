#include <stdio.h>

int main(){
	int i;
	int idade;
	//i= i+1
	
	for(i=-0; i<3; i++){
		printf("Digite a idade! ");
		scanf("%d", &idade);
		if(idade <= 18)
			printf("Jovem\n");
			else printf("Adulto\n");
	}
	printf("FIM");
}
/*Verificar se i < 3
	i é menor
	Imprimir "Digite a idade!"
	O usuario digitou 47
	Verificar se 47 é menor ou igual a 18
	47 é maior que 18
	Imprimir "Adulto"
	i muda o valor de 0 para 1 devido a formula i++
	i = 1
	Repetir o loop pois i é menor que 3
	Imprimir "Digite a idade!"
	O usuario digitou 12
	Verificar se 12 é menor ou igual a 18
	12 é menor que 18
	Imprimir "Jovem"
	i muda o valor de 1 para 2 devido a formula i++
	i = 2
	Repetir o loop pois i é menor que 3
	Imprimir "Digite a idade!"
	O usuario digitou 70
	Verificar se 70 é menor ou igual a 18
	70 é maior que 18
	Imprimir "Adulto"
	i muda o valor de 2 para 3 devido a formula i++*/
	
