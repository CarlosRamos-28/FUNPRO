#include<stdio.h>
#include<math.h>
int EsPrimo(int num);
int main(){
	//variables antes de la iteracion:
	int a,b;
	int limite_inferior,limite_superior;
	int combinaciones;
	int suma_rara1,suma_rara2,suma_rara3,suma_rara4;
	while(1){
		//re-declarar variables por cada iteracion:
		combinaciones=0;
		printf("----------\n");
		printf("Ingrese el rango para exponentes, 2 <= rango <= 20, ingrese 0 en ambos para terminar: ");
		scanf("%d %d",&limite_inferior,&limite_superior);
		//verificar rango
		if(limite_inferior>=2 && limite_superior<=20 && limite_superior>limite_inferior){
			//generar exponentes dentro del rango
			for(a=limite_inferior;a<=limite_superior;a++){
				for(b=limite_inferior;b<=limite_superior;b++){
					if(a==b || b<a){
						continue;
					}
					else{
						combinaciones=0;
						//verificar si la suma da minimo un primo
						suma_rara1= pow(2,b) + pow(2,a) + 1;
						suma_rara2= pow(2,b) + pow(2,a) - 1;
						suma_rara3= pow(2,b) - pow(2,a) + 1;
						suma_rara4= pow(2,b) - pow(2,a) - 1;
						if(EsPrimo(suma_rara1)||EsPrimo(suma_rara2)||EsPrimo(suma_rara3)||EsPrimo(suma_rara4)){
							printf("Evaluación de los exponentes: %d y %d\n",b,a);
							if(EsPrimo(suma_rara1)){
								printf("%d = 2^%d + 2^%d + 1\n",suma_rara1,b,a);
								combinaciones++;
							}
							if(EsPrimo(suma_rara2)){
								printf("%d = 2^%d + 2^%d - 1\n",suma_rara2,b,a);
								combinaciones++;
							}
							if(EsPrimo(suma_rara3)){
								printf("%d = 2^%d - 2^%d + 1\n",suma_rara3,b,a);
								combinaciones++;
							}
							if(EsPrimo(suma_rara4)){
								printf("%d = 2^%d - 2^%d - 1\n",suma_rara4,b,a);
								combinaciones++;
							}
							if(combinaciones==4){
								printf("Las cuatro combinaciones de operaciones con los exponentes %d y %d dan como resultado números primos de Solimas\n",a,b);
							}
							else{
								printf("Sólo %d combinaciones de operaciones con los exponentes %d y %d dan como resultado números primos de Solimas\n",combinaciones,a,b);
							}
						}
						else{
							continue;
						}
					}
				}
			}
		}
		else{
			printf("Rango incorrecto\n");
		}
	}
	return 0;
}
int EsPrimo(int num){
	int i,valid;
	if(num<=1){
		valid=0; // no es primo 0=falso		
	}
	else{
		for(i=2;i*i<=num;i++){
			if(num%i==0){
				valid=0; //no es primo 0=falso
				break; 
			}
			else{
				valid=1; // es primo 1=verdadero
			}
		}
	}
	return valid;
}



