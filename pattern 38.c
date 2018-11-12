/*
38)
	  *
     * *
    * * *
     * * 
      *
*/
	#include<stdio.h>
	void main(){
		int i,j,k;
		for(i=1;i<=3;i++){
			for(k=3;k>=i;k--)
				printf(" ");
			for(j=1;j<=i;j++)
				printf("* ");
			printf("\n");
		}
		for(i=2;i>=1;i--){
			for(k=i-2;k<=1;k++)
				printf(" ");
			for(j=i;j>=1;j--)
				printf("* ");
			printf("\n");
		}
	}
