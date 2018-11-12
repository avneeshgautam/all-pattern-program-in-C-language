/*

29)
 	      1
	    1 2 A
	  1 2 3 A B
	1 2 3 4 A B C
*/

#include<stdio.h>
void main(){
int i,j,k,l;
//char l,n;
for(i=1;i<=4;i++){
    for(j=4;j>i;j--)
        printf("  ");
    for(k=1;k<=i;k++)
        printf("%d ",k);
	for(l=1;l<i;l++)
		printf("%c ",l+64);
	printf("\n");
}

}
