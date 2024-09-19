#include <stdio.h>
#include <math.h>

int main (){
	int i,todas_mayuscula;
	char palabra[5],mostrar[5];  // una palabra con 4 dígitos y 1 que es el null '\0'
	int permutaciones=0,j,k,l;
	char a,b,c,d;
	int suma,temp_comparar,perma_guardar;
	while(1){
		printf("Ingrese 4 caracteres: ");
		scanf("%4s",&palabra); // sólo lee 4 dígitos
		palabra[4]='\0';
		todas_mayuscula=1;
		permutaciones=0;
		for(i=0;palabra[i]!='\0';i++){
			if(palabra[i]<'A'||palabra[i]>'Z'){
				todas_mayuscula=0;
			}
		}
		if(todas_mayuscula){
			if(palabra[0]!=palabra[1] && palabra[0]!=palabra[2] && palabra[0]!=palabra[3] &&
			   palabra[1]!=palabra[2] && palabra[1]!=palabra[3] &&
			   palabra[2]!=palabra[3]){ //todas las letras son diferentes
			   i=0;
				for(i=0;i<4;i++){
					for(j=0;j<4;j++){
						if(i==j){
							continue;
						}
						else{
							for(k=0;k<4;k++){
								if(k==i||k==j){ //ijkl
									continue;
								}
								else{
									for(l=0;l<4;l++){
										if(l==k||l==j||l==i){
											continue;
										}
										else{
											permutaciones++;
											printf("%d) %c %c %c %c\n",permutaciones,palabra[i],palabra[j],palabra[k],palabra[l]);
											//demas calculos
											suma= ((int)palabra[i])*1000 + ((int)palabra[j]*100) + ((int)palabra[k]*10) + (int)palabra[l];
											switch(permutaciones){
												case 1:{
													temp_comparar=suma;
													a=palabra[i];
													b=palabra[j];
													c=palabra[k];
													d=palabra[l];
													break;
												}
												default:{
													if(temp_comparar<suma){
														temp_comparar=suma;
														a=palabra[i];
														b=palabra[j];
														c=palabra[k];
														d=palabra[l];
														perma_guardar=permutaciones;
													}
													break;
												}
											}
										}
									}
								}
							}	
						}
					}
				}
				printf("cantidad de permutaciones: %d\n",permutaciones);
				printf("el mayor numero formado es: %d\n",temp_comparar);
				int f,g,h,i;
				f=(int)a;
				g=(int)b;
				h=(int)c;
				i=(int)d;
				printf("es el resultado de la permutación %d de las letras %c%c%c%c %dx1000 + %dx100 + %dx10 + %d = %d\n",perma_guardar,a,b,c,d,f,g,h,i,temp_comparar);
			}
			else{
				printf("Las letras ingresadas no son mayúsculas o no son diferentes entre sí.\n");
			}
		}
		else{
			printf("Las letras ingresadas no son mayúsculas o no son diferentes entre sí.\n");
		}
	}
	
	return 0;
}


	
	
