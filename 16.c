/*
	12345
	 2345
	  345
	   45
	    5
*/
	#include<stdio.h>
	void main(){
		int i,j,k;
		
		for(i=1;i<=5;i++){
			for(k=2;k<=i;k++)
				printf(" ");
			for(j=i;j<=5;j++)
				printf("%d",j);
		printf("\n");
		}
		
	}
