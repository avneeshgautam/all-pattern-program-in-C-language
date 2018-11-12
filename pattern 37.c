/*
37)
	   A
	  B B
	 C C C
	D D D D
*/
	#include<stdio.h>
	void main(){
		char i,j,k;
		for(i='A';i<='D';i++){
			for(k='D';k>=i;k--)
				printf(" ");
			for(j='A';j<=i;j++)
				printf("%c ",i);
			printf("\n");
		}
	}
