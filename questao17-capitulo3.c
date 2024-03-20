#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	float raio;
	float comprimento=0;
	float area=0;
	float volume=0;
	
	printf("Considerando o Valor de pi como 3,14 insira o valor do raio: \n");
	scanf("%f", &raio);
	
	comprimento=(2*3.14*raio);
	area=(3.14*raio*raio);
	volume=(0.75*3.14*raio*raio*raio);
	
	printf("Comprimento da circunferencia: %.2f \n", comprimento);
	printf("Area da circunferencia: %.2f \n", area);
	printf("Volume da circunferencia: %.2f \n", volume);

	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
