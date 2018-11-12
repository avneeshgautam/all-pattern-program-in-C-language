/*
	5432*
	543*1
	54*21
	5*321
	*4321
*/
	#include<stdio.h>
	void main(){
		int i,j,k;
		
		for(i=1;i<=5;i++){
			for(j=5;j>=i+1;j--)
				printf("%d",j);
				printf("*");
			for(k=i-1;k>=1;k--)
				printf("%d",k);
		printf("\n");
		}
	}
