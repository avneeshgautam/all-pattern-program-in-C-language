#include<stdio.h>
void main(){
	int i,j,k;
	
	for(i=1;i<=3;i++){
		for(k=1;k<=i;k++)
			printf("a");
		for(j=4;j>i;j--)
			printf("*");
		printf("\n");
	}
}
