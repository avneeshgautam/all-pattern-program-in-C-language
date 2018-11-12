/*
	ABCDE
	BCDE
	CDE
	DE
	E
*/
	#include<stdio.h>
	void main(){
		char i,j;
		
		for(i='A';i<='E';i++){
			for(j=i;j<='E';j++)
				printf("%c",j);
			printf("\n");
		}
	}
