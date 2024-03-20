#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
    float real, dolar, marco, libra;
    
    printf("Informe a quantidade de dinheiro em Reais que ira levar para viagem: \n");
    scanf("%f",&real);
	
	printf("Quantidade de dinheiro em Dolares: %.2f \n", dolar=real*1.8);
	printf("Quantidade de dinheiro em Marco Alemao: %.2f \n", marco=real*2);
	printf("Quantidade de dinheiro em Libra Esterlina: %.2f \n", libra=real*3.57);			
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
   
