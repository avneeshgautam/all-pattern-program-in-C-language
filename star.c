/*
	      *
	    * *
	  * * *
	* * * *
	  * * *
	    * *
	      *
*/

	#include<stdio.h>
	void main()
	{
		int i,j,k;
		
		for(i=1;i<=4;i++){
			for(k=3;k>=i;k--)
				printf("  ");
			for(j=1;j<=i;j++)
				printf("* ");
			printf("\n");
		}
		for(i=1;i<=3;i++){
			for(k=1;k<=i;k++)
				printf("  ");
			for(j=4;j>i;j--)
				printf("* ");
		printf("\n");
	}
	}
