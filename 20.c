/*
	A
	BA 
	CBA
	DCBA
*/
	#include<stdio.h>
	void main(){
		char i,j;
		
		for(i='A';i<='D';i++){
			for(j=i;j>='A';j--)
				printf("%c",j);
			printf("\n");
		}
	}
