#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
    float salarioMinimo, salarioBruto, salarioFinal, horas, horasExtras, qtdExtra;
    
    printf("Informe o valor do salario minimo: \n");
    scanf("%f", &salarioMinimo);
    printf("Informe a quantidade de horas trabalhadas: \n");
    scanf("%f", &horas);
    printf("Informe a quantidade de horas extras trabalhadas: \n");
    scanf("%f", &horasExtras);
    
    salarioBruto= horas*(salarioMinimo/8);
    qtdExtra= horasExtras*(salarioMinimo/4);
    
    printf("Valor do Salario Final: %.2f \n", salarioFinal=salarioBruto+qtdExtra);
			
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
   
