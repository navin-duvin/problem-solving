#include <stdio.h>

void find(int weight[],int n){
	int machine=weight[0];
	for(int i=0;i<n;i++){
		if(weight[i]<machine){
			printf("\nDefective box:%d ",i);
			break;
		}
	}
}

int main(){
	int n;
	printf("Enter the number of chocolate boxes:\n");
	scanf("%d",&n);

	int weight[n];
	printf("Enter the box weight:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&weight[i]);

	}
	for(int i=0;i<n;i++){
		printf("%d ",weight[i]);
	}
	find(weight,n);
	return 0;
}