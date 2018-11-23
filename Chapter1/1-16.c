#include <stdio.h>
#define MAXLEN 1000

int getLine(char l[]);
void copyLine(char l[],char lon[]);

int main(){
	int len,max,i;
	char line[MAXLEN],longline[MAXLEN];
	max=0;

	while((len=getLine(line))>0){
		if(len>max){
			max=len;
			copyLine(line,longline);
		}
	}

	if(max>0){
		printf("The longest line has length %d",max);
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
	line[l]='\0';
	return l;
}

void copyLine(char line[],char longline[]){
	int i;
	i=0;
	while((longline[i]=line[i])&&(line[i]!='\0')){
		++i;
	}
}
