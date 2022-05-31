#include <stdio.h>

int main(){
	int m,n;
	printf("Enter the m * n matrix size:\n");
	scanf("%d %d",&m,&n);
	int i,j,k;
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Element:[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int min,max;
	int index,lucky;
	for(i=0;i<m;i++){
		min = 100000;
		index =-1;
		for(j=0;j<n;j++){
			if(arr[i][j]<min){
				min=arr[i][j];
				index=j;
			}
		}
		
		max = -1;
		for(k=0;k<n;k++){
			if(arr[k][index]>max){
				max= arr[k][index];
			}
		}
		if(max==min){
			lucky = max;
		}
	}
	
	printf("Lucky number is:%d",lucky);
	return 0;
}
