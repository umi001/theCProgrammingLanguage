#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void main(){
	float cel, far;

	char c[]="Celcius";
	char f[]="Fahrenheit";
	printf("%3s%9s\n",f,c);

	for(far=LOWER;far<=UPPER;far+=STEP){
		cel=5.0*(far-32.0)/9.0;
		printf("%3.0f\t%6.2f\n",far,cel);
	}
}
