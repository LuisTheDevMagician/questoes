#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    float area, diagonalMaior, diagonalMenor;
    printf("Area do Losango\n");
    printf("Valor da Diagonal Maior:\n");
    scanf("%f", &diagonalMaior);
    printf("Valor da Diagonal Menor:\n");
    scanf("%f", &diagonalMenor);
    area = (diagonalMaior * diagonalMenor) / 2;
    printf("Valor da Area do Losango: %.2f\n",  area);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
