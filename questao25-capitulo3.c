#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	int horas, minutos;
	
	printf("Informe o numero de horas: \n");
	scanf("%d", &horas);
	printf("Informe o numero de minutos: \n");
	scanf("%d", &minutos);
	
	printf("%d Horas em minutos: %d \n", horas, horas*60);
	printf("Total de horas em minutos: %d \n", (horas*60)+minutos);
	printf("Tempo total em segundos: %d \n", ((horas*60)+minutos)*60);
	
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
   
