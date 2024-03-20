#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
    int lado, diagonal;
    
    printf("Informe a quantidade de lados do Poligono: \n");
    scanf("%d",&lado);
	
	printf("Quantidade de diagonais do Poligono: %d \n", diagonal=(lado*(lado-3))/2);
			
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
   
