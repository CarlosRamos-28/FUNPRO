#include <math.h>
#include <stdio.h>
double calculo_e(int num_iteraciones){
	int i;
	double suma,factorial;
	
	suma = 0;
	i = 0;
	factorial = 1; // hola esto es un easter egg
	
	while (i< num_iteraciones){
			
			if (i==0){
				
				suma=suma + 1;
			}
			else{
			
			factorial=factorial*i;
			suma = suma + (double)1/factorial;
			
			}
			i++;
	}
	return suma;
}

int main(){
	int num_iteraciones;
	double suma,factorial,valor_e;
	scanf ("%d", &num_iteraciones);
	
	if (num_iteraciones>0){
		valor_e=calculo_e (num_iteraciones);
		
		
		printf("el numero es %lf\n",valor_e);
	}
	else{
		printf("el numero debe ser positivo\n");
	}
	return 0;
}


