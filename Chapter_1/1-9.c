#include <stdio.h>
void main(){
	int c,nspaces;
	nspaces=0;

	while((c=getchar())!=EOF){
		putchar(c);
		while(c==' ' && c!=EOF){
			c=getchar();
			if(c!=' '){
				putchar(c);
			}
		}	
	}
}


