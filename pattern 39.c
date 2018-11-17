/*
39)
	x=1!+3!+5!+7!+9!....
*/
	#include<stdio.h>
	void main(){
		int i,j,n,f=1;
		printf("\n Enter the number:");
			scanf("%d",&n);
		printf("\n x=1!");
		for(i=3;i<=n;i++){
			if(i%2!=0){
				printf("+%d!",i);
			}
		}
		printf("......");	
	}
