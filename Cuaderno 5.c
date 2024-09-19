#include <math.h>
#include <stdio.h>

int main (){
	int a,b;
	a = 100;
	b = 101;
	intercambiar(&a,&b);
	printf ("%d, %d",a , b);
	return 0;
}
void intercambiar(int *p,int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
