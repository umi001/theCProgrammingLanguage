#include <stdio.h>
#define MAXLEN 1000
#define CUTOFFLEN 80

int getLine(char l[]);
void copyLine(char l[],char lon[]);

int main(){
	int len;
	char line[MAXLEN];

	while((len=getLine(line))>0){
		if(len>CUTOFFLEN){
			printf("%s\n",line);
		}
	}

	return 0;
}

int getLine(char line[]){
	int c,l;
	l=0;
	while(((c=getchar())!=EOF)&&(c!='\n')&&(l<MAXLEN)){
		line[l]=c;
		++l;
	}
	if(c=='\n'){
		line[l]=c;
		++l;
	}
	return l;
}


