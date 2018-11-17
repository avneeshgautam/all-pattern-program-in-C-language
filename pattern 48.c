/*
48)
	*
	**
	* *
	*  *
	*   *
	*    *
	*     *
	*      *
	*		*
	*	 	 *
	*	  	  *
	************
*/
	#include<stdio.h>
	void main(){
		int i,j,k,num;
		printf("\n Enter the number :");
			scanf("%d",&num);
			printf("\n*\n");
			
		for(i=1;i<=num;i++){
			printf("*");
			for(j=1;j<i;j++)
				printf(" ");
			printf("*\n");
		}
		for(k=1;j<=(num*2)+1;j++)
			printf("*");
	}
