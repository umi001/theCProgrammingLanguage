#include<stdio.h>
#include<math.h>

int lower(int,char);
int upper(int,char);
void main(){

	printf("Range of int: %d to %d\n",lower(sizeof(int),'u'),upper(sizeof(int),'u'));
	printf("Range of signed int: %d to %d\n",lower(sizeof(int),'s'),upper(sizeof(int),'s'));

	printf("Range of float: %d to %d\n",lower(sizeof(float),'u'),upper(sizeof(float),'u'));

	printf("Range of char: %d to %d\n",lower(sizeof(char),'u'),upper(sizeof(char),'u'));

}

int lower(int size,char sign){
	if(sign == 'u'){
		return 0;
	}
	else{
		return -1*pow(2,5);
	}
}

int upper(int size,char sign){
	if(sign == 'u'){
		return pow(2,3)-1;
	}
	else{
		return pow(2,1)-1;
	}
}

