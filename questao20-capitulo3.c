#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	double medidaBase, anguloBase, medidaEscada;
	
	printf("Informe a medida da base: \n");
	scanf("%lf", &medidaBase);
	printf("Informe o Angulo formado entre a Escada e a Base: \n");
	scanf("%lf", &anguloBase);
	
	anguloBase= anguloBase*M_PI/180;
	
	medidaEscada= medidaBase / (cos(anguloBase));
	
	
	printf("Medida da Escada: %.0lf \n", medidaEscada);
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
    
	return 0;
}
   
