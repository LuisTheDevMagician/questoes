#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	int aN, aA;
	int idade=0;
	printf("Informe o ano de nascimento: \n");
	scanf("%d", &aN);
	printf("Informe o ano atual: \n");
	scanf("%d", &aA);
	idade= aA-aN;
	
	printf("Idade da pessoa em anos: %d \n", idade);
	printf("Idade da pessoa em meses: %d \n", idade*12);
	printf("Idade da pessoa em dias: %d \n", idade*365);
	printf("Idade da pessoa em semanas: %d \n", idade*48);
	
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
