#include<math.h>
#include<stdio.h>
// numeros pseudoaleatorios
int main (){
	double ini,num;
	int i=2,num_it;
	printf("Ingrese el primer valor\n");
	scanf("%lf",&ini);
	printf("Ingrese el numero de iteraciones\n");
	scanf("%d",&num_it);
	
	while (i<=num_it){
		num = (2269*ini + 1); 
		mod (65536);
		ini = num;
		i++;
	}
	printf("el numero final es %lf \n", num);
	
return 0;
}


