#include <stdio.h>
#include <stdlib.h>

int main(){

	float mediab1,mediab2,mediab3,mediab4,mediafinal;
	float b1p1,b1p2,b1p3,b1p4;
	float b2p1,b2p2,b2p3,b2p4;
	float b3p1,b3p2,b3p3,b3p4;
	float b4p1,b4p2,b4p3,b4p4;
	float provafinal;


	printf("Vamos calcular se voce foi aprovadou ou reprovado neste ano");
	printf("Primeiro bimestre:\n");
	printf("Prova 1:");
	scanf("%f",&b1p1);
	printf("Prova 2:");
	scanf("%f",&b1p2);
	printf("Prova 3:");
	scanf("%f",&b1p3);
	printf("Prova 4:");
	scanf("%f",&b1p4);
	
	mediab1=(b1p1+b1p2+b1p3+b1p4)/4;
	
	printf("\n\nSegundo bimestre:\n");
	printf("Prova 1:");
	scanf("%f",&b2p1);
	printf("Prova 2:");
	scanf("%f",&b2p2);
	printf("Prova 3:");
	scanf("%f",&b2p3);
	printf("Prova 4:");
	scanf("%f",&b2p4);
	
	mediab2=(b2p1+b2p2+b2p3+b2p4)/4;

	printf("\n\nTerceiro bimestre:\n");
	printf("Prova 1:");
	scanf("%f",&b3p1);
	printf("Prova 2:");
	scanf("%f",&b3p2);
	printf("Prova 3:");
	scanf("%f",&b3p3);
	printf("Prova 4:");
	scanf("%f",&b3p4);
	
	mediab3=(b3p1+b3p2+b3p3+b3p4)/4;
	
	printf("\n\nQuarto bimestre:\n");
	printf("Prova 1:");
	scanf("%f",&b4p1);
	printf("Prova 2:");
	scanf("%f",&b4p2);
	printf("Prova 3:");
	scanf("%f",&b4p3);
	printf("Prova 4:");
	scanf("%f",&b4p4);
	
	mediab4=(b4p1+b4p2+b4p3+b4p4)/4;
	
	mediafinal=(mediab1+mediab2+mediab3+mediab4)/4;
	
	if (mediafinal>=7){
		
		printf("Voce foi aprovado");
		
	
	}else if(mediafinal<=5){
	
		printf("Voce esta reprovado");
	
	}else{
		
		printf("Voce devera fazer a prova final");
		printf("Resultado da prova final:");
		scanf("%f",&provafinal);
		
		mediafinal=(provafinal*4+mediab1*6+mediab2*6+mediab3*6+mediab4*6)/(4+6+6+6+6);
		
		if(mediafinal>=5.5 && mediafinal<7){
			
			printf("Voce foi aprovado");
			
		}else{
			
			printf("Voce foi reprovado");
			
		}
	}
	
	return 0;

}
