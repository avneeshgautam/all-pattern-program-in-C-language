/* 
      1
     121
    12321
   1234321
  123454321
   1234321
	12321
	 121
	  1

*/
	
	#include<stdio.h>
	int main()
	{
		int i,j,k,l,m;
		for(i=1;i<=5;i++)
		{	
			for(l=4;l>=i;l--)
				printf(" ");
			for(j=1;j<=i;j++)
				printf("%d",j);
			
			for(k=i-1;k>=1;k--)
				printf("%d",k);
			
			printf("\n");
 		}
 		for(i=4;i>=1;i--)
			{
				for(l=4;l>=i;l--)
					printf(" ");
				for(j=1;j<=i;j++)
					printf("%d",j);
				
				for(k=i-1;k>=1;k--)
					printf("%d",k);								
				printf("\n");
			}
	}
