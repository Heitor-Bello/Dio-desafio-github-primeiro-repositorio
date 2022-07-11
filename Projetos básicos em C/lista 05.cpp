#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");

	int cont;
	
	for(cont = 1; cont <= 5; cont++){
		printf("%i\n", cont);
	}

	return 0;
}
