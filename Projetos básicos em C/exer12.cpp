#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int bolinhas, resultado;
	
	printf("Digite uma quantidade inteira de bolinhas que direi se � dividido igualmente entre 3 irm�os!\n");
	scanf("%i", &bolinhas);
	
	resultado = bolinhas%3;
	
	if(resultado == 0){
		printf("� uma quantidade divisiv�l para os 3 irm�os!");
	}else{
		printf("N�o � divisiv�l para os 3 irm�os");
	}
	
	return 0;
}
