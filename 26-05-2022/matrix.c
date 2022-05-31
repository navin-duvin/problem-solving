#include <stdio.h>

int main(){
	int n,m;
	printf("Enter the size of an array:\n");
	scanf("%d %d",&m,&n);
	
	int arr[m][n];
	
//	int arr[3][4]={1,10,4,2,
//				   9,3,8,7,	   
//				   15,16,17,12
//				   };
//	
	int i,j;
	printf("Enter the element in the array:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Element:[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

   	int min=0,max=0;
	int x,col;
	for(i=0;i<3;i++){
		x=0;
	   min=arr[i][0];
		for(j=0;j<4;j++){
			if(arr[i][j]<min){
				min=arr[i][j];
				col=j;
				x=i;
				for(x=i;x<3;x++){
					if(min>arr[x][col]){
						max = min;
					}else{
						max= arr[x][col];
					}
				}
			}
	}
	printf("%d\n",min);
	printf("Max:%d\n",max);
	
   }
	printf("Lucky number is %d",max);
	return 0;
}
