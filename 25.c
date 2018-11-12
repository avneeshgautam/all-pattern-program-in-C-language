/*
	E
	DD
	CCC
	BBBB
	AAAAA
*/
	
	#include<stdio.h>
	void main(){
		char i,j;
		
		for(i='E';i>='A';i--){
			for(j=i;j<='E';j++)
				printf("%c",i);
			printf("\n");
		}
	}
