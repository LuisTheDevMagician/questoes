#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	float peso;
	float gramas;
	printf("Valor do peso em Kg:\n");
	scanf("%f", &peso);
	gramas = peso * 1000;
	printf("Peso em gramas: %.2f\n", gramas);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
