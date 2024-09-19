#include<stdio.h>
#include<math.h>
int main (){
	double landa;
	char medio;
	printf ("Ingrese el medio donde se propaga");
	scanf(" %c", &medio);
	if (medio == 'A' || medio == 'a'){
		landa = 340 / 440;
		printf ("Landa es %lf para medio Aire", landa);
	}
	else {
		if (medio == 'G' || medio == 'g'){
			landa = 1400/440;
			printf ("Landa es %lf para medio Agua",landa);
		}
		else{
			printf ("Medio no soportado\n");
			return 1;
		}
	}	
	return 0;
}
