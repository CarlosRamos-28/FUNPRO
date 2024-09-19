#include <stdio.h>
#include <math.h>

//prototipos de funciones calculo_constante_mágica(int numero_n);
int calculo_constante_magica(int numero_n);
int cumplir_constante_magica (int a,int b,int c,int d,int e,int f,int g,int h,int i,int constante_magica);
int numeros_diferentes(int a,int b,int c,int d,int e,int f,int g,int h,int i);

int main (){
	int a,b,c,d,e,f,g,h,i;
	
	
	for (a=1 ; a<=9 ; a++){
		for (b=1 ; b<=9;b++){
			for(c=1;c<=9;c++){
				for(d=1;d<=9;d++){
					for(e=1;e<=9;e++){
						for(f=1;f<=9;f++){
							for(g=1;g<=9;g++){
								for(h=1;h<=9;h++){
									for(i=1;i<=9;i++){
										if(numeros_diferentes(a,b,c,d,e,f,g,h,i)){
											int constante_magica,numero_n=3;
											constante_magica = calculo_constante_magica(numero_n);
											if (cumplir_constante_magica(a,b,c,d,e,f,g,h,i,constante_magica)){
											printf("*************\n");
											printf("%d %d %d\n",a,b,c);
											printf("%d %d %d\n",d,e,f);
											printf("%d %d %d\n",g,h,i);		
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	
return 0;	
}
int calculo_constante_magica(int numero_n){
	int const_mag;
	const_mag = (numero_n * (pow(numero_n,2)+1))/2;
	return const_mag;
}
int cumplir_constante_magica (int a,int b,int c,int d,int e,int f,int g,int h,int i,int constante_magica){
	int validar;
	validar = (a + b + c == constante_magica) && //se compara cada suma con la constante magica
              (d + e + f == constante_magica) &&
              (g + h + i == constante_magica) &&
              (a + e + i == constante_magica) &&
              (c + e + g == constante_magica) &&
              (a + d + g == constante_magica) &&
              (b + e + h == constante_magica) &&
              (c + f + i == constante_magica);
	return validar;
}int numeros_diferentes(int a,int b,int c,int d,int e,int f,int g,int h,int i){
	return (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i &&  // la manera correcta de compara que todos los 9 valores sean diferentes
            b != c && b != d && b != e && b != f && b != g && b != h && b != i &&
            c != d && c != e && c != f && c != g && c != h && c != i &&
            d != e && d != f && d != g && d != h && d != i &&
            e != f && e != g && e != h && e != i &&
            f != g && f != h && f != i &&
            g != h && g != i &&
            h != i);
}






