#include <stdio.h>

int main(){
	char letra;
	char palavra[50];
	char unicaPalavra[50];
	char duasPalavras[50];
	printf("Digite a letra: ");
	scanf("%c", &letra);
	fflush(stdin);
	printf("Digite a palavra: ");
	scanf("%s", &unicaPalavra);
	fflush(stdin);
	printf("Digite a palavra: ");
	fflush(stdin);
	fgets(duasPalavras, 50, stdin);
	
	printf("Letra: %c ", letra);
	printf("Unica palavra: %s\n", unicaPalavra);
	printf("Duas palavras: %s", duasPalavras);
	
	switch(letra){
		case 'S': printf("Digitou S\n"); break;
		case 'N': printf("Digitou N\n"); break;
		case 'F': printf("Digitou F\n"); break;
		default: printf("Letra indevida");
	}
}
