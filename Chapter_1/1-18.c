#include<stdio.h>

#define OUT 1
#define IN 0
#define MAXLEN 1000
void clrArray(int a[]);
void printArray(int a[]);
int main(){
	int arr[MAXLEN];
	int i,c;
	int state; 
	state = OUT;
	i = 0;
	clrArray(arr);
	
	while((c=getchar())!=EOF){
		if(c == ' ' || c == '\t'){
			arr[i] = c;
			++i;
		}		

		else if(c != '\n'){
				printArray(arr);
				clrArray(arr);
				putchar(c);
				state = IN;
				i = 0;
			}

		else{
		       	if(state == IN){
				printArray(arr);
				clrArray(arr);
				putchar(c);
				state = OUT;
				i = 0;
			}
			else{
				clrArray(arr);
			}
		}
	}

}

void clrArray(int arr[]){
	int i;
	for(i = 0;i<MAXLEN;++i){
		arr[i] = '0';
	}
}

void printArray(int arr[]){
	int i;
	for(i=0; arr[i]!='0'; ++i){
		putchar(arr[i]);
	}
}

	

