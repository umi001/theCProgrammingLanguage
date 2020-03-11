#include <stdio.h>
#define NOCHAR 128
void main(){
	int c,i,arr[NOCHAR];
	for(i=0;i<NOCHAR;i++){
		arr[i]=0;
	}
	while((c=getchar())!=EOF){
		++arr[c];
	}
	for(i=0;i<NOCHAR;i++){
		putchar(i);
		int j;
		for(j=0;j<arr[i];j++){
			putchar('*');
		}
		putchar('\n');
	}
}
