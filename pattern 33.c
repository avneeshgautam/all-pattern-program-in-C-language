/*
33)
	4
	4 3
	4 3 2
	4 3 2 1
*/
  
  #include<stdio.h>
  void main(){
  	int i,j,n,k;
  	printf("\n Enter the number:");
  		scanf("%d",&n);
  	for(i=1;i<=4;i++){
  		k=4;
  		for(j=1;j<=i;j++){
  			printf("%d ",k);
  			 	k--;
		  }
		  printf("\n");
	  }
  }
