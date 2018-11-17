/*
50)
	*   *
	** **
	* * *
	*   *
	*   *
*/
	#include<stdio.h>
	void main(){
		int i,j,k;
		for(i=1;i<=5;i++){
			for(j=1;j<=5;j++){
				if((i==2||j==3||j==4)&&i==1)
					printf(" ");
				else if(i==3 && i==2)
					printf(" ");
				else if((j==2||j==4)&&(i==3))
					printf(" ");
				else if((j==2||j==3||j==4)&&(i==4||i==5))
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
	}
