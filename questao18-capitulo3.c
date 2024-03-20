#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	float cel, fa;
	
	printf("Informe a temperatura em graus celsius: \n");
	scanf("%f", &cel);
	
	fa=(180*(cel+32))/100;
	
	printf("Temperatura em graus Fahrenheit: %.1f \n", fa);
	
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
