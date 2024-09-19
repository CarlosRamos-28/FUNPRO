#include <math.h>
#include <stdio.h>

int main () {
	int numero,factorial=1,i=1;
	scanf ("%d",&numero);
	while (i<= numero){
		factorial = factorial * i;
		i++ ;
	}
	printf ("%d",factorial);
	return 0;
}


