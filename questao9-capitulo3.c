#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    float area;
    float baseMaior;
    float baseMenor;
    float altura;
    printf("Area do trapezio\n");
    printf("Valor da Base Maior:\n");
    scanf("%f", &baseMaior);
    printf("Valor da Base Menor:\n");
    scanf("%f", &baseMenor);
    printf("Valor da altura:\n");
    scanf("%f", &altura);
    area = ((baseMaior + baseMenor) * altura) / 2;
    printf("Valor da Area do Trapezio: %.2f\n",  area);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
