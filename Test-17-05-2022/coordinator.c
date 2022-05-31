#include <stdio.h>


void findcordinate(int arr[],int n){
		int max=arr[n-1];
		for(int i=n-2;i>=0;i--){
			if(max < arr[i]){
				max=arr[i];
				printf("%d ",max);
			}
		}
}

int main(){
	 int n;
	 printf("Enter the size of array:\n");
	 scanf("%d",&n);
	 int arr[n];
	 
	 printf("Enter the array elements:\n");
	 for(int i=0;i<n;i++){
	 	printf("Element[%d]",i);
	 	scanf("%d",&arr[i]);
	}
	
	//int arr[]={-1,17,4,3,5,2};
	//int n =sizeof(arr)/sizeof(arr[0]);
	findcordinate(arr,n);

	return 0;
}