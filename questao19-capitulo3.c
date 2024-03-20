#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	float parede1, parede2, area, potencia;
	
	printf("Informe o comprimeto da primeira parede: \n");
	scanf("%f", &parede1);
	printf("Informe o comprimeto da segunda parede: \n");
	scanf("%f", &parede2);
	
	area=(parede1*parede2);
	potencia=(18*area);
	
	printf("Area do comodo em metros quadrados: %.2f metros \n", area);
	printf("Potencia da iluminacao a ser utilizada em watts: %.0f W \n", potencia);
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
