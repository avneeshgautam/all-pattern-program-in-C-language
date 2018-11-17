/*
49)
	********
	*      *
	*      *
	********
*/
	#include<stdio.h>
	void main(){
		int i,j,k;
		for(i=1;i<=4;i++){
			for(j=1;j<=8;j++){
				//printf("*");
				if(i==1||i==4||j==1||j==8/)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
