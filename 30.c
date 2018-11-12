/*
	1
	2 3
	4 5 6
	7 8 9 10
*/
	
	#include<stdio.h>
	void main(){
		int i,j;
		
		for(i=1;i<=5;i++){
			for(j=i;j<=10;j++)
				printf("%d",j+1);
			printf("\n");
		}
	}
