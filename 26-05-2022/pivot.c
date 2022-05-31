#include <stdio.h>

int main(){
	int n;
	printf("Enter the array:\n");
	scanf("%d",&n);
	int i,j;
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Element:[%d]",i);
		scanf("%d",&arr[i]);
	}
	int mid = n/2;
	
	printf("Middle:%d\n",arr[mid]);
	int leftsum=0;
	int rightsum=0;
	
	for(i=0;i<n;i++){
		if(n==3){
			leftsum=0;
			mid = mid-1;
			break;
		}
		if(i==mid){
			break;
		}
		
		leftsum+=arr[i];
	}

	for(j=n-1;j>=0;j--){
		if(j==mid){
			break;
		}
		rightsum +=arr[j];
	}
	
	if(rightsum!=leftsum){
		printf("-1");
	}else if(rightsum==leftsum){
		printf("pivot:%d",mid);
	}

	
	
	//printf("%d ",leftsum);
	//printf("%d ",rightsum);
	return 0;
}
