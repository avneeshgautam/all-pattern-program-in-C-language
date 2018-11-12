/* 
	1
	3 5 7
	9 11 13 15 17 19
*/

	#include<stdio.h>
	void main()
	{
		int i,j,k=2,z=3;
		printf("1\n");
		for(i=1;i<=2;i++)
		{
			for(j=i;j<=i*3;j++,z=z+2)
				printf("%d ",z);
			printf("\n");
		}
		
	}
