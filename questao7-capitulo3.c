#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	float peso;
	float engordar;
	float emagrecer;
	printf("Peso possivel ao engordar ou emagrecer\n");
	printf("Peso Corporal:\n ");
	scanf("%f", &peso);
	engordar = (peso * 0.15) + peso;
	emagrecer = peso - (peso * 0.20);
	printf("Peso ao engordar: %.2f\n", engordar);
	printf("Peso ao emagrecer: %.2f\n", emagrecer);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
