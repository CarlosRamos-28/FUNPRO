#include<math.h>
#include<stdio.h>

int main (){
	
printf ("Ingrese la unidad de medida de la temperatura: ");
scanf ("%c", unidad_temp);

//verificacion de temperatura
if (unidad_temp == 'F'|| unidad_temp == 'f' || unidad_temp == 'C' || unidad_temp == 'c' || unidad_temp == 'K' || unidad_temp == 'k'){
	
	printf ("Ingrese la temperatura");
	scanf ("%lf", num_temp);
	
	//calculos por tipo de temp
	if (unidad_temp == 'k' || unidad_temp == 'K'){ //para kelvin
		num_temp += -273.15;
	}
	else{
		if (unidad_temp == 'F' || unidad_temp == 'f'){  // para farenheit
		num_temp = 5*(num_temp - 32)/9;
		}		
	}
	
	// verificar temperatura
	if (num_temp <200 && num_temp >0){
		
		printf ("Ingrese la presion (atm): ");
		scanf ("%lf", presion);	
				
		//filtro presion positiva
		if (presion >0){
			
			printf ("Ingrese el tipo de gas (H h, N n, A a, M m):");
			scanf ("%c", tipo_gas);
			
			if (tipo_gas == 'H' || tipo_gas == 'h'||tipo_gas == 'N'|| tipo_gas == 'n'|| tipo_gas == 'A'||tipo_gas == 'a'|| tipo_gas == 'M' || tipo_gas == 'm'){
				
				if (tipo_gas == 'H' || tipo_gas == 'h'){
					
					
					
					
					
					
				}
				else{
					if (tipo_gas == 'N' || tipo_gas == 'n'){
						
						
					}
				}
				
				
				
				
				
			}
			else{
				printf("El tipo de gas es incorrrecto");
			}
		}
		else{
			printf("La presion debe ser positiva");
		}	
	}
	else{
		printf("La temperatura no se encuentra en el rango [0;200]");
	}
}
else{
	printf("La unidad de medida de temperatura es incorecta.");
}





return 0;
}


