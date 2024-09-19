#include <stdio.h>
#include <math.h>

int main(){
	int total_filas,contador_filas;
	printf("Escribe cantidad de filas");
	scanf("%d", &total_filas);
	
	total_filas = trunc(total_filas/100);
	printf("%d",total_filas);
	
	
	
	return 0;
}
