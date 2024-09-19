#include<stdio.h>
#include<math.h>
int VerificarEstetico(int numero);
int CambiarBase(int base_transformar,int numero);

int main(){
	int limite_inferior,limite_superior,numero,encontrar_numero_estetico,base_transformar,encontrado,numero_transformado;
	while(1){
		printf("Ingrese el rango: ");
		scanf("%d %d",&limite_inferior,&limite_superior);
		if(limite_superior==0&&limite_inferior==0){
			break;
		}
		else{
			if(limite_inferior<limite_superior&&limite_inferior>0){
				//generar numeros dentro del rango
				for(numero=limite_inferior,encontrar_numero_estetico=0;numero<=limite_superior;numero++){
					//generar bases con las que transformar a cada número generado
					for(base_transformar=2,encontrado=0;base_transformar<=10;base_transformar++){
						//llamo a la funcion que cambie de base al número
						numero_transformado=CambiarBase(base_transformar,numero);
						//llamo a la función que verifica si el número en la nueva base es estético
						if(VerificarEstetico(numero_transformado)){
							encontrado++;
							if(encontrado==1){
								printf("\n%d = %d (%d)",numero,numero_transformado,base_transformar);
								encontrar_numero_estetico++;	
							}
							else{
								printf(", %d (%d)",numero_transformado,base_transformar);
							}
						}
					}
				}
				if(encontrar_numero_estetico==0){
					printf("\nNo existen números estéticos en el rango [%d,%d].\n",limite_inferior,limite_superior);
				}
				else{
					printf("\nEn el rango [%d,%d] se encontraron %d numeros esteticos\n",limite_inferior,limite_superior,encontrar_numero_estetico);
				}
			}
			else{
				printf("El rango ingresado no es valido\n");
			}
		}
	}
	return 0;
}
int CambiarBase(int base_transformar,int numero){
	int num_iteracion,digito,numero_transformado;
	for(num_iteracion=1,numero_transformado=0;numero!=0;numero/=base_transformar,num_iteracion++){
		digito=numero%base_transformar;
		numero_transformado+=digito*(int)pow(10,num_iteracion-1);
	}
	return numero_transformado;
}
int VerificarEstetico(int numero){
	int i,cant_digitos,lugar,posicion,digito,temp_digito,es_estetico;
	//numero de digitos
	for(i=numero;i!=0;i/=10){
		cant_digitos++;
	}
	//generar dígitos de izquierda a derecha
	for(lugar=1;lugar<=cant_digitos;lugar++){
		posicion=cant_digitos-lugar;	
		digito=((numero%((int)pow(10,posicion+1)))-numero%((int)pow(10,posicion)))/((int)pow(10,posicion));
		//verifico si es estetico (comparo el digito generado con el digito generado anteriormente)
		if(lugar==1){
			temp_digito=digito;
		}
		else{
			es_estetico=0;  //asumimos que no es estetico desde el principio
			if(temp_digito==digito+1){
				es_estetico=1; //es estetico
				temp_digito=digito;
			}
			else{
				if(temp_digito==digito-1){
					es_estetico=1; // es estetico
					temp_digito=digito;
				}
				else{
					break;
				}
			}
		}
	}
	return es_estetico;
}












