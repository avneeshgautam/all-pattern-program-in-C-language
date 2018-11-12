#include<stdio.h>
int main()
 {
 	int i,j,k,n ;
 	printf("\n Enter the number of rows:");
 		scanf("%d",&n);
 	for(i=1;i<=n;i++) //loop for rows
 	{
 		for(k=n-1;k>=i;k--) //loop for space
 			printf(" ");
 	
	 	if(i%2==0){
 			
 			for(j=1;j<=i;j++)
 				printf("0 ");
 				
		 }
		else{
			for(j=1;j<=i;j++)
				printf("1 ");
		}
		printf("\n");
 	}
 	
 	
}

