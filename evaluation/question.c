#include <stdio.h>

int fun(int a[],int n){
	int x;
	if(n==1)
		return a[0];
	else
		x=fun(a,n-1);

	if(x>a[n-1]){
		return x;
	}
	else{
		return a[n-1];
	}

}

int main(int argc, char const *argv[])
{	int n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int arr[n];
	int ans=fun(arr,n);
	printf("%d",ans);
	return 0;
}

//1.find maximum element in the array
//testcase 1:{1,2,3,4,5}
//testcase 2:{0};
//testcase 3 {5}
//testcase 4 {0,2,4,5,5}