/*
47)
	**********
	****  ****
	***    ***
	**		**
	*	 	 *
	**		**
	***    ***
	****  ****
	**********
*/
	
	#include<stdio.h>
	void main(){
		int i ,j,k;
		for(i=5;i>=1;i--){
			for(j=1;j<=i;j++)
				printf("*");
			for(k=10;k>(2*i);k--)
				printf(" ");
			for(j=1;j<=i;j++)
				printf("*");
			printf("\n");
		}
		for(i=1;i<=5;i++){
			for(j=1;j<=i;j++)
				printf("*");
			for(k=(2*i);k<10;k++)
				printf(" ");
			for(j=1;j<=i;j++)
				printf("*");
			printf("\n");
		}
	}
