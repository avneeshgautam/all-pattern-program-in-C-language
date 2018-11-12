/*

  26)
	      1
	    121
	  12321
	1234321 
  123454321
	
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
 }
