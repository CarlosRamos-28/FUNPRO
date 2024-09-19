#include<math.h>
#include<stdio.h>
int main (){
	int i,k,j,validar_primo,validacion_1,validacion_2;
	int cant_esfenicos_encontrados,limite_inferior,limite_superior;
	int divisor_temp1,divisor_temp2,divisor_temp3,numero;
	while(1){
		divisor_temp1=1;
		divisor_temp2=1;
		divisor_temp3=1;
		printf("Ingrese el rango: ");
		scanf("%d %d",&limite_inferior,&limite_superior);
		if(limite_inferior>0 && limite_inferior>0){
				if(limite_inferior<limite_superior){
					//generar número dentro del rango
					for(i=limite_inferior;i<=limite_superior;i++){
						//generar divisores del número
						for(k=1;k<=i;k++){
							if(i%k==0){
								//es divisor
								//verificamos si el divisor es primo
								validar_primo=1; //asumimos que en un principio el divisor es primo
								if(k<=1){
									validar_primo=0; //no es primo
								}
								else{
									for(j=2;j*j<=k;j++){
										if(k%j==0){
											validar_primo=0; //no es primo
											break;
										}
									}
								}
								//hasta aca ya sé si el divisor es primo
								if(validar_primo=1){ // si el divisor es primo, hace la comparación entre la multiplicación de divisores primos y el número
									divisor_temp1=k;
									divisor_temp2=divisor_temp1;
									divisor_temp3=divisor_temp2;
									validacion_1=((divisor_temp1*divisor_temp2*divisor_temp3)==i);
									validacion_2=(divisor_temp1!=divisor_temp2&&divisor_temp1!=divisor_temp3&&divisor_temp2!=divisor_temp3);
									if(validacion_1&&validacion_1){
										cant_esfenicos_encontrados++;
										break;
									}	
								}
							}
						}
					}	
					printf("se encontraron %d\n",cant_esfenicos_encontrados);					
				}
				else{
					printf("EL rango ingresado es inválido\n");
				}
		}
		else{
			if(limite_inferior==0&&limite_superior==0){
				//fin del programa y reporte
				
			}	
			else{
				printf("EL rango ingresado es inválido\n");
			}		
		}
	}
	
	return 0;
}























