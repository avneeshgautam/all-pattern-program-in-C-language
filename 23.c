/*
	ABCDE
	ABCDE
	ABCDE
*/
	#include<stdio.h>
	void main(){
		int i;
		char j;
		
		for(i=1;i<=3;i++)
		{
			for(j='A';j<='E';j++)
				printf("%c",j);
			printf("\n");
		}
	}
