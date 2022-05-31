#include <stdio.h>
#include <string.h>

int main(){
	char arr[5][3]={
		'X','X','X','X',
		'X','X','X','X',
		'X','X','X','X',
		'X','X','X','X',
		'X','X','X','X'
	};
	int x,y,i,j;

	printf("Enter the adventurer position:\n");
	scanf("%d %d",&x,&y);
	arr[x][y]='A';

	printf("Enter the gold position:\n");
	scanf("%d %d",i,j);
	arr[i][j]='G';


	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}