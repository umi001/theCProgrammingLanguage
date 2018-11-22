#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
float farTocel(float f);
int main(){
	float cel, far;

	char c[]="Celcius";
	char f[]="Fahrenheit";
	printf("%3s%9s\n",f,c);

	for(far=LOWER;far<=UPPER;far+=STEP){
		
		printf("%3.0f\t%9.2f\n",far,farTocel(far));
	}
	return 0;
}
float farTocel(float f){
	int cel;
	return 5.0*(f-32.0)/9.0;
}

