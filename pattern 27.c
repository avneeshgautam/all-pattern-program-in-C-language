/*
 27)
	      1
	    121
	  12321
	1234321
	  12321
	    121
	      1
*/
 
 #include<stdio.h>
 void main(){
 	int i,j,k,n,l;
 	printf("\n Enter the number:");
 		scanf("%d",&n);
 	for(i=1;i<=n;i++){
 		for(l=(2*n);l>(2*i);l--)
 			printf(" ");
 		for(j=1;j<=i;j++)
 			printf("%d",j);
 		for(k=i-1;k>0;k--)
 			printf("%d",k);
 		printf("\n");
	 }
	 for(i=n-1;i>=1;i--){
	 	for(l=(2*i);l<(2*n);l++)
			 printf(" ");
	 	for(j=1;j<i;j++)
	 		printf("%d",j);
	 	for(k=i;k>0;k--)
	 		printf("%d",k);
	 	printf("\n");
	 }
 }
