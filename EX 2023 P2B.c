#include<stdio.h>
#include<math.h>
#define PI_REAL 3.141592
#define ELASTICIDAD 30000
void Calculos(double D,double L,double *area,double *carga,double *inercia,double *esfuerzo);
double CalcularA(double D);
double CalcularI(double D);
double CalcularP(double I,double L);

int main(){
	int opcion;
	int cantidad_columnas,i;
	double diametro,longitud,suma;
	double area_circulo,carga_axial,inercia,esfuerzo;
	double mayor_esfuerzo,menor_esfuerzo;
	double promedio_esfuerzos;
	while(1){
		suma=0;
		printf("Menu de opciones:\n1: Calculo de valores de compresion\n0: Fin\nIngrese la opcion: ");
		scanf("%d",&opcion);
		if(opcion==0){
			break;
		}
		else{
			switch(opcion){
				case 1:{
					//calculo de valores de compresion
					printf("Ingrese la cantidad de columnas a evaluar: ");
					scanf("%d",&cantidad_columnas);
					for(i=1;i<=cantidad_columnas;i++){
						while(1){
							printf("Ingrese el diametro de la seccion transversal: ");
							scanf(" %lf",&diametro);
							printf("Ingrese longitud de la columna: ");
							scanf(" %lf",&longitud);
							if(diametro>0 && longitud>0){
								break;
							}
						}
						//calculos
						Calculos(diametro,longitud,&area_circulo,&carga_axial,&inercia,&esfuerzo);
						//reporte:
						printf("El area del circulo es: %lf\nLa carga axial es: %lf\nLa inercia es: %lf\nEl esfuerzo de compresión es: %lf\n------------------\n",area_circulo,carga_axial,inercia,esfuerzo);
						suma+=esfuerzo;
						if(i==1){
							mayor_esfuerzo=esfuerzo;
						}
						else{
							if(mayor_esfuerzo<esfuerzo){
								menor_esfuerzo=mayor_esfuerzo;
								mayor_esfuerzo=esfuerzo;
							}
							else{
								menor_esfuerzo=esfuerzo;
							}
							
						}
					}
					//reporte general:
					promedio_esfuerzos=suma/cantidad_columnas;
					printf("Reporte - por grupo de columnas\nEl promedio de esfuerzos es: %lf\nEl mayor valor de esfuerzo calculado es: %lf\nEl menor valor de esfuerzo calculado es: %lf\n",promedio_esfuerzos,mayor_esfuerzo,menor_esfuerzo);
					break;
				}
				default:{
					printf("Opcion Incorrecta\n------------------------\n");
					break;
				}
			}
		}
	}
	return 0;
}
void Calculos(double D,double L,double *area,double *carga,double *inercia,double *esfuerzo){
	double A,I,F,P;
	A=CalcularA(D);
	I=CalcularI(D);
	P=CalcularP(I,L);
	F=P/A;
	*area=A;
	*carga=P;
	*inercia=I;
	*esfuerzo=F;
	return;
}
double CalcularA(double D){
	double radio,calculo;
	radio=D/2;
	calculo=PI_REAL*pow(radio,2);
	return calculo;
}
double CalcularI(double D){
	double radio,calculo;
	radio=D/2;
	calculo=(PI_REAL*pow(radio,4))/4;
	return calculo;
}
double CalcularP(double I,double L){
	double calculo,pi_cuadrado,L_cuadrado;
	pi_cuadrado=pow(PI_REAL,2);
	L_cuadrado=pow(L,2);
	calculo=(pi_cuadrado*ELASTICIDAD*I)/L_cuadrado;
	return calculo;
}

