#include<stdio.h>
int htoi(char[]);


int main(){
	char ch[5];
	int i;
	ch[0] = 'f';ch[1]='2';ch[2] = '9';ch[3] = '\0';
	int y;
	y = htoi(ch);
	printf("\n%d",y);
	return 0;
}
int htoi(char hstr[]){

	int i,n,dec;
	i=0;
	if(hstr[i]=='0'){
		++i;
		if(hstr[i] == 'x' || hstr[i] == 'X')
			++i;
	}
	n =0;
	for(;hstr[i]!='\0';++i){
		if(hstr[i] >= '0' && hstr[i] <='9'){
			dec = hstr[i] - '0';
			printf("\n%d",dec);
		}
		else if(hstr[i] >= 'a' && hstr[i]<='f'){
			dec = 10 + hstr[i] - 'a';
			printf("\n%d",dec);
		}
		else if(hstr[i]>='A' && hstr[i]<='F'){
			dec = 10 + hstr[i] - 'a';
			printf("\n%d",dec);
		}
		n = 16*n + dec;
	}
	return n;
}











