#include <stdio.h>
#include <string.h>

int main(){
	int n=5;
	int outer,inner,i;
	for(outer=1;outer<=n;outer++){
		for(inner=1;inner<=n;inner++){
			if(outer==inner){
				printf("%d",outer);
			}
					if(outer+inner==n+1 && outer!=inner){
						printf("%d",outer);		
					}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}	
}
