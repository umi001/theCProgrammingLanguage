#include <stdio.h>
#define MAXLEN 5

int getLine(char l[],int lim);
void copyLine(char l[],char lon[]);

int main(){
	int len,max,i;
	char line[MAXLEN],longline[MAXLEN];
	max=0;

	while((len=getLine(line,MAXLEN))>0){
		if(len>max){
			max=len;
			copyLine(line,longline);
		}
	}

	if(max>0){
		printf("The longest line has length %d\n",max);
		int i;
		for(i=0;i<max;++i){
			putchar(longline[i]);
		}

	}
	return 0;
}

int getLine(char line[], int limit){
	int c,l,check;
	l = check =0;
	while(((c=getchar())!=EOF)&&(c!='\n')){
		if(check<limit-1){
			line[l]=c;
			++check;
		}
		++l;
	}
	if(c=='\n' && l < limit-1){
		line[check]=c;
		++l;
	}
	line[check]='\0';
	return l;
}

void copyLine(char line[],char longline[]){
	int i;
	i=0;
	while((longline[i]=line[i])&&(line[i]!='\0')){
		++i;
	}
}
