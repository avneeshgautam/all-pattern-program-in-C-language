/*

1		 1
12		21
123    321
1234  4321
1234554321

*/
#include<stdio.h>
void main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		
		for(k=5;k>i;k--)
			printf("  ");
		
		for(k=i;k>=1;k--)
			printf("%d",k);
		
		printf("\n");
	}
}
