//Programa para c�lculo de m�dia

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float nota01,nota02,nota03,nota04,media;
	
	printf("A intui��o aqui � calcular sua m�dia final!\n\n");
	printf("Digite sua primeira nota:\n");
	scanf("%f",&nota01);
	printf("Digite sua segunda nota:\n");
	scanf("%f",&nota02);
	printf("Digite sua terceira nota:\n");
	scanf("%f",&nota03);
	printf("Digite sua quarta nota:\n");
	scanf("%f",&nota04);
	
	media=(nota01+nota02+nota03+nota04)/4;
	
	printf("Sua m�dia final �: %0.2f\n", media);
	
	return 0;
	
	
}
