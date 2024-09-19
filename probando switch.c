#include <math.h>
#include <stdio.h>

int main (){
	int digit;
	printf ("Ingresa tu dato\n");
	scanf ("%d", &digit);
	
	switch (digit){
		case 1:{
			printf("ja");
		}
		case 2:{
			printf("jaja");
		}	
		case 3:{
			printf("jajaja");
			break;   // el break hace que cuando entre a ese case se interrumpa el switch
		}
		default:{
			printf("fabiancito");
		}
	}
	
	
	
	return 0;
}
