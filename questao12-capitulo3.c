#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    float sa1, sa2, prop;
    printf("Quantos Salarios Minimos Recebe\n");
    printf("Valor do Salario Minimo:\n");
    scanf("%f", &sa1);
    printf("Salario que o Funcionario Recebe:\n");
    scanf("%f", &sa2);
    prop = sa2 / sa1;
    printf("Quantitade de Salarios Minimos que Recebe: %.2f\n",  prop);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
