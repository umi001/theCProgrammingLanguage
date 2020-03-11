#include <stdio.h>
void main(){
	int nl=0;
	int nt=0;
	int nb=0;
	int c;
	
	while((c=getchar())!=EOF){
		if(c=='\t'){
			++nt;
		}
		if(c=='\n'){
			++nl;
		}

		if(c==' '){
			++nb;
		}
	}

	printf("Blank space: %d\n",nb);
	printf("Line : %d\n",nl);
	printf("Tab space: %d\n",nt);
	
}
