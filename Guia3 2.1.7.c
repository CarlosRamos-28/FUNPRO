#include<stdio.h>
#include<math.h>
int main (){
	int c,d,n,z,y;
	printf ("Ingrese costo de matrícula en soles\n");
	scanf("%d", &c);
	printf ("Ingrese porcentaje de descuento\n");
	scanf("%d", &d);
	printf ("Ingrese numero de ciclo\n");
	scanf("%d", &n);
	if (n>= 5){
		z = c - (c*d)/100
	}
	else {
		z = c;
	}
	printf ("Debera pagar %d soles", z);
	
	return 0;
}
