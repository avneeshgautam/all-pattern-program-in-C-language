/*
	AAAAA
	BBBB
	CCC
	DD
*/
	#include<stdio.h>
	void main(){
		char i,j;
		for(i='A';i<'D';i++){
			for(j='A';j>=i;j--)
				printf("%c",j);
			printf("\n");
		}
	}
