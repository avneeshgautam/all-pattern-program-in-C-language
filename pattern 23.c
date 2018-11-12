/* output 

23)
	1 1 1
	1 1 2
	1 1 3
	1 2 1
	1 2 2
	1 2 3
	1 3 1
	1 3 2
	1 3 3
	2 1 1
	2 1 2
	2 1 3
	2 2 1
	2 2 2
	2 2 3
	2 3 1
	2 3 2
	2 3 3
	3 1 1
	3 1 2
	3 1 3
	3 2 1
	3 2 2
	3 2 3
	3 3 1
	3 3 2
	3 3 3
*/
#include<stdio.h>
void main(){
	int i,j,k;
	
	for(i=1;i<4;i++){
		for(j=1;j<4;j++){
			for(k=1;k<4;k++){
				printf("%d %d %d",i,j,k);
			printf("\n");
			}
			
		}
		
	}
}
