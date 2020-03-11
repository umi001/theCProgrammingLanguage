#include <stdio.h>

void main(){
	int c;
	int line_count, blank_count, tab_count;
	line_count = blank_count = tab_count =0;

	while((c=getchar()) != EOF){
		if(c == ' '){
			++blank_count;
		}
		else if(c == '\n'){
			++line_count;
		}
		else if(c == '\t'){
			++tab_count;
		}
	}
	printf("No of blanks: %d\nNo of tabs: %d\nNo of lines: %d\n",blank_count,tab_count,line_count);
}
		

