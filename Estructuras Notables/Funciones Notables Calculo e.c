#include <math.h>
#include <stdio.h>

int main (){
	int iteraciones,i;
	double suma,factorial;
	suma = 0;
	i = 0;
	factorial = 1;
	scanf ("%d", &iteraciones);
			
	if (iteraciones>0){
		while (i<iteraciones){
			if (i==0){
				suma=suma + 1;
			}
			else{
			
			factorial=factorial*i;
			suma = suma + 1/factorial;
			
			}
			i++;
		}
		printf("la suma es %lf\n",suma);
	}
	else{
		printf("el numero debe ser positivo\n");
	}

	return 0;
}
