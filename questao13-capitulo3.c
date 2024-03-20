#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	int numero;
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	
	printf("%dx0=%d\n", numero, numero*0);
	printf("%dx1=%d\n", numero, numero*1);
	printf("%dx2=%d\n", numero, numero*2);
	printf("%dx3=%d\n", numero, numero*3);
	printf("%dx4=%d\n", numero, numero*4);
	printf("%dx5=%d\n", numero, numero*5);
	printf("%dx6=%d\n", numero, numero*6);
	printf("%dx7=%d\n", numero, numero*7);
	printf("%dx8=%d\n", numero, numero*8);
	printf("%dx9=%d\n", numero, numero*9);
	printf("%dx10=%d\n", numero, numero*10);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
