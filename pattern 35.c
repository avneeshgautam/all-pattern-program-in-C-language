/*

35)
	A B C D
	  A B C
	    A B
	      A
	      
*/
  #include<stdio.h>
  void main(){
  	char i,j,k;
  	for(i='D';i>='A';i--){
  		for(k='D';k>i;k--)
  			printf("  ");
  		for(j='A';j<=i;j++)
  			printf("%c ",j);
  		
  		printf("\n");
	  }
  }
