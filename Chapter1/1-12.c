#include <stdio.h>
#define IN 1
#define OUT 0
void main(){
	int c,state;
	state=OUT;
	printf("\n");
	while((c=getchar())!=EOF){
		if((c==' '||c=='\n'||c=='\t')&&state==IN){
			state=OUT;
			printf("\n");
		}
		else if((c==' '||c=='\n'||c=='\t')&&state==OUT)
		{}
		else{
			state=IN;
			putchar(c);
		}
	}
}
