#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	float produto;
	float calculo;
	float resultado;
	printf("Preco do produto com desconto\n");
	printf("Valor do produto:\n ");
	scanf("%f", &produto);
	calculo = (produto * 10) / 100;
	resultado = produto - calculo;
	printf("Preco com desconto: %.2f\n", resultado);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
