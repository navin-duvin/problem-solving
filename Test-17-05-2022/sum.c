#include <stdio.h>


int findsubset(int arr[],int n,int sum){
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==sum){
				printf("(%d,%d)",arr[j],arr[i]);
				flag=1;
			}
		}
	}
	return flag;
}

int main(){
	int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int sum;
	int arr[n];
	printf("Enter the array elements:\n");
	for(int i=0;i<n;i++){
		printf("Element[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the sum value:\n");
	scanf("%d",&sum);
	int check=findsubset(arr,n,sum);

	if(check==1){
		printf("\ntrue");
	}else{
		printf("\nfalse");
	}
	return 0;
}