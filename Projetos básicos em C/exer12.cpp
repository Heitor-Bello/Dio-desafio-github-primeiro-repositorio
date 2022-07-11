#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int bolinhas, resultado;
	
	printf("Digite uma quantidade inteira de bolinhas que direi se é dividido igualmente entre 3 irmãos!\n");
	scanf("%i", &bolinhas);
	
	resultado = bolinhas%3;
	
	if(resultado == 0){
		printf("É uma quantidade divisivél para os 3 irmãos!");
	}else{
		printf("Não é divisivél para os 3 irmãos");
	}
	
	return 0;
}
