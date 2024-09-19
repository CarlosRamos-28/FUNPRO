#include<math.h>
#include<stdio.h>
int main(){
	int numero=6543210;
	int i,cant_digitos,lugar,posicion,digito;	
	//contar digitos
	for(i=numero,cant_digitos=0;i!=0;i/=10){
		cant_digitos++;
	}
	
	//generar digitos de derecha a izquierda
	for(lugar=0;lugar<cant_digitos;lugar++){
		digito=((numero%((int)pow(10,lugar+1)))-numero%((int)pow(10,lugar)))/((int)pow(10,lugar));
		printf("%d\n",digito);
	}
	
	return 0;
}

