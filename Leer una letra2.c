#include<math.h>
#include<stdio.h>
//leer una letra e ingresarla en una estrucutra selectiva comparando su valor
int main (){
	char variable;
	printf("Ingrese valor de la variable\n");
	scanf("%c",&variable);
	
	//estructura selectiva
	if (variable == 'H' || variable == 'J'){
		if (variable == 'H'){
			printf("Escribiste H");
		}
		else{
			printf("escribiste J");
		}
	}
	else{
		printf("No escribiste ni H ni J");
	}
return 0;
}


