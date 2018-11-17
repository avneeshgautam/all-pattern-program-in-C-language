/*
40)
		1 1
       2   2
      3     3
     4       4
      3     3
       2   2
        1 1
*/
 
 	#include<stdio.h>
 	void main(){
 		int i,j,k;
 		for(i=1;i<=4;i++){
 			for(j=4;j>=i;j--)
 				printf(" ");
 			//for(j=i;j>=i;j--)
 				printf("%d",i);
 			for(j=1;j<(2*i);j++)
			 	printf(" ");
				
			//for(j=i;j>=i;j--)
 				printf("%d",i);
 			printf("\n");
		 }
		for(i=3;i>=1;i--){
				
			for(j=1;j<=i;j++)
				printf("*");
			printf("%d",i);
			printf("\n");
		}
	 }
