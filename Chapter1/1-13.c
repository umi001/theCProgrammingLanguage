#include <stdio.h>
#define IN 1
#define OUT 0
void main(){
	int nwords[15],c,i,len,state;
	len=0;
	state=OUT;
	for(i=0;i<15;i++){
		nwords[i]=0;
	}
	
	while((c=getchar())!=EOF){
		if((c==' '||c=='\n'||c=='\t')&&state==IN){
			state=OUT;
			++nwords[len-1];
			len=0;
		}
		else if((c==' '||c=='\n'||c=='\t')&&state==OUT)
			;
		else{
			state=IN;
			++len;
		}
	}
	for(i=0;i<15;i++){
		printf("%d\t",i+1);
		int j;
		for(j=0;j<nwords[i];j++){
			printf("%s","*");
		}
		printf("\n");
	}
}

