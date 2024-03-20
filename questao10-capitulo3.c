#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    float area, lado;
    printf("Area do quadrado\n");
    printf("Valor do Lado:\n");
    scanf("%f", &lado);
    area = lado * lado;
    printf("Valor da Area do Quadrado: %.2f\n",  area);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
