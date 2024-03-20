#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	float salario;
	float vendas;
	float salario_final;
	float calculo_comissao;
	printf("Salario com comissao\n");
	printf("Valor do salario bruto:\n ");
	scanf("%f", &salario);
	printf("Vendas:\n");
	scanf("%f", &vendas);
	calculo_comissao = vendas * 0.04;
	salario_final = salario + calculo_comissao;
	printf("Valor da comissao: %.2f\n", calculo_comissao);
	printf("Salario final: %.2f\n", salario_final);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
