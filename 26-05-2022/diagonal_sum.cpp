using namespace std;

#include <iostream>

int main(){
	int n;
	printf("Enter the size of matrix:\n");
	scanf("%d",&n);
	int arr[n][n];
	int i,j;
	int sum=0;
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	         printf("Element:[%d][%d]",i,j);
	        scanf("%d",&arr[i][j]);
	    }
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j || i+j==n-1){
				sum =sum +arr[i][j];
			}
		}
	}
	printf("Sum:%d ",sum);
	return 0;
}
