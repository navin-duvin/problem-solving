#include <stdio.h>
#include <string.h>

int main(){

	char arr[5][4]={
		'X','X','X','X',
		'X','X','X','X',
		'X','X','X','X',
		'X','X','X','X',
		'X','X','X','X'
	};

	int ax,ay,gi,gj;

	printf("Enter the adventurer position:\n");
	scanf("%d %d",&ax,&ay);
	arr[ax][ay]='A';

	printf("Enter the gold position:\n");
	scanf("%d %d",&gi,&gj);

	arr[gi][gj]='G';

	int mi,mj;	
	printf("Enter the monster position:\n");
	scanf("%d %d",&mi,&mj);
	arr[mi][mj]='M';

    int left,right,up,down;
	int rowstart=0,colstart=0;
	int rowend=5,colend=4;

	int start[ax][ay];
	int end[gi][gj];
    
	printf("\nfinding position:\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}

	int minsteps=0;
	int monsteps=0;

	int st,ed;

	// for(int i=0;i<5;i++){
	// 	for(int j=0;j<4;j++){
	// 		int k=i+j;
	// 		if(start[ax][ay]==end[gi][gj]){
	// 			printf("(%d,%d)",ax,ay);
	// 			break;
	// 		}
	// 	}
	// 	printf("\n");
	// }
	
	int flag=1;

	// while(1){
	// 		st=ax;
	// 		ed=ay;
	// 	 	if(ay>=gj){
	// 	 		printf("(%d,%d)\n",start[ax][ay]);
	// 	 		ay++;

	// 	 	}else if(ay<=gj){
	// 	 		printf("(%d,%d)\n",end[ax][ay]);
	// 	 		ay--;
	// 	 	}

	// 	 	// if(start[ax][ay]==end[gi][gj]){
	//  	 // 		printf("(%d,%d)\n",ax,ay);
	//  	 // 		flag=0;
	// 		 // 	break;
	// 	  // 	}
	// }

		
	if(flag==1){
		minsteps=ax+gj-gi;
		monsteps=mi+gj-gi;
	}
	

	printf("Minimum no. of steps:%d\n",minsteps);
	printf("Monster of steps:%d\n",monsteps);
    
	if(monsteps>minsteps){
		printf("adventurer win\n");
	}else if(monsteps==minsteps){
		printf("No posiible solution\n");
	}else{
		printf("adventurer was killed:\n");
	}

	
	return 0;
}







