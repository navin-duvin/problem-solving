#include <stdio.h>
#include <string.h>

int main(){
	int weight;
	
	printf("Enter the weight of the watermelon:\n");
	scanf("%d",&weight);
	int flag=0;
	
	for(int i=1;i<weight;i++){
		for(int j=1;j<weight;j++){
			if(i+j==weight){
				if(i==j){
					flag=1;
				}
			}
		}
	}
    if(weight%2!=0){
		printf("NO");
		return 0 ;
	}
	if(flag=1){
		printf("\nYES");
	}
	
	return 0;
}

