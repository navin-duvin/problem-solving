#include <stdio.h>

int main(){
	int n;
	printf("Enter the number of kids:\n");
	scanf("%d",&n);
	
	int kids[n];
	int i,j;
	printf("Enter the candies for kids:\n");
	for(i=0;i<n;i++){
		scanf("%d",&kids[i]);
	}
	int extra;
	printf("Enter the extra candies:\n");
	scanf("%d",&extra);
	
	for(i=0;i<n;i++){
		if((kids[i]+extra)>=n){
			printf("True\n");
		}else{
			printf("false\n");
		}
	}
	return 0;
}
