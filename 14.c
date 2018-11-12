/*
   11111
   0000
   111
   00
   1
*/

	#include<stdio.h>
	void main(){
		int i,j;
		
		for(i=1;i<=5;i++){
			if(i%2==0){
				for(j=5;j>=i;j--)
					printf("0");
			}
			else{
				for(j=5;j>=i;j--)
					printf("1");
			}
			printf("\n");
		}
	}   

