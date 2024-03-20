#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
    int anguloA, anguloB, anguloC;
    
    printf("Informe o valor do primeiro angulo do triangulo: \n");
    scanf("%d",&anguloA);
    printf("Informe o valor do segundo angulo do triangulo: \n");
    scanf("%d",&anguloB);
    
    printf("O valor do terceiro angulo e: %d \n", anguloC=(180-(anguloA+anguloB)));
	
			
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
   
