#include<stdio.h>
#include<math.h>

void PrimerLeer(int *cantidad,char *signo);
void SegundoLeer(int *num,int *den);
int MCM(int num_1,int num_2);
void Calculos(int cant,char signo,int *numerador_total,int *denominador_total);
int MCD(int a,int b);
int main() {
	int cant_fracciones;
	char operacion;
	int primer_numerador,primer_denominador,segundo_numerador,segundo_denominador;
	int validar;
	int calcula_operacion;
	int final_num,final_den;
	while(1){
		validar=0;
		calcula_operacion=0;
		final_num=0;
		final_den=0;
		PrimerLeer(&cant_fracciones,&operacion);
		switch(operacion){
			case '+':{
				break;
			}
			case '-':{
				break;
			}
			default:{
				validar++;
				break;
			}
		}
		if(cant_fracciones<2){
			validar++;	
		}
		if(validar==0){ //aca la cago cuando pongo = en lugar de ==
			Calculos(cant_fracciones,operacion,&final_num,&final_den);
			printf("El resultado de la operación es: %d / %d\n",final_num,final_den);
		}
		else{
			printf("Los datos ingresados son inválidos.\n");
			continue;
		}
	}
	return 0;
}
void PrimerLeer(int *cantidad,char *signo){ 
	int cant;
	char sig;
	printf("Ingrese cantidad de fracciones: ");
	scanf("%d",&cant);
	printf("Ingrese operacion: ");
	scanf(" %c",&sig); //si acá lo dejo como "%c" falla pero si lo pongo " %c" con un espacio si funciona xd
	(*cantidad)=cant;
	(*signo)=sig;
	return;
}
void SegundoLeer(int *num,int *den){
	int a,b;
	printf("Ingrese numerador y denominador: ");
	scanf("%d %d",&a,&b);
	*num=a;
	*den=b;
	return;
}
int MCM(int num_1,int num_2){ //debe retornar el MCM
	int mcm,mcd;
	mcd=MCD(num_1,num_2);
	mcm=(fabs(num_1*num_2))/mcd;
	return mcm;	
}
void Calculos(int cant,char signo,int *numerador_total,int *denominador_total){
	int i;
	int numerador,denominador,temp_numerador,temp_denominador;
	int mcm;
	int ult_numerador,ult_denominador;
	for(i=1;i<=cant;i++){
		mcm=0;
		switch(i){
			case 1:{
				SegundoLeer(&numerador,&denominador);
				temp_numerador=numerador;
				temp_denominador=denominador;
				break;
			}
			default:{
				SegundoLeer(&numerador,&denominador);
				mcm=MCM(denominador,temp_denominador);
				
				switch(signo){
					case '+':{
						ult_numerador=(mcm*temp_numerador/temp_denominador)+(mcm*numerador/denominador);
						break;
					}
					case '-':{
						ult_numerador=(mcm*temp_numerador/temp_denominador)-(mcm*numerador/denominador);
						break;
					}	
				}
				ult_denominador=mcm;
				
				temp_numerador=ult_numerador;
				temp_denominador=ult_denominador;
				
				break;
			}
		}
	}
	
	*numerador_total=ult_numerador;
	*denominador_total=ult_denominador;
	return;
}
int MCD(int a,int b){
	int divisor;
	if (a>=b){
		divisor=b;
	}
	else{
		divisor=a;
	}
	while(divisor>=1){
		if(a%divisor==0 && b%divisor==0){
			return divisor;
		}
		divisor--;
	}
}
	
	
	




