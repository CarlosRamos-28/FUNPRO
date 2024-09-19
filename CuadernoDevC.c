#include <math.h>
#include <stdio.h>	

int main () {
	int l,c,calculo,z,y,resto,residuo;
	printf ("Escriba los valores de L y C \n");
	scanf ("%d %d",&l,&c);
	residuo = l%c;
	if (residuo == 0){
		z = l/c;
	}
	else {
		z = trunc(l/c) + 1;
	}
printf ("calculo %d\n", calculo);
printf ("resto %d\n", resto);
printf ("Se requiere %d paquete(s)", z);
	return 0;
}
