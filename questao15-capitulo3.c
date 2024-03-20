#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	float salario, co1, co2;
	float ca1, ca2, ca3;
	float salariof=0;
	
	printf("Informe o valor do salario: \n");
	scanf("%f", &salario);
	printf("Informe o valor da conta 1: \n");
	scanf("%f", &co1);
	printf("Informe o valor da conta 2: \n");
	scanf("%f", &co2);
	
	ca1= ((co1*2)/100) + co1;
	ca2= ((co2*2)/100) + co2;
	ca3= ca1+ca2;
	salariof = salario - ca3;

	
	printf("Salario final: %.2f \n", salariof);
	
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
