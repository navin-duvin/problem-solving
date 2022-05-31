#include <stdio.h>

int main(){
    int n,m;
	printf("Enter the number of string:\n");
	scanf("%d %d",&n,&m);
	char str[n][m];
	
	char pre[20];
	printf("Enter the prefix word:\n");
	scanf("%s",pre);
	
	printf("Enter the element in string:\n");
	int i,j;
	for(i=0;i<n;i++){
			scanf("%s",str[i]);
	}
	int x=0;
	int f=0;
	int count=0;
	for(i=0;i<n;i++){
	    x=0;
	    if(str[i][x]==pre[0]){
	        for(j=1;pre[j];j++){
	            if(str[i][++x]==pre[j]){
	                f=1;
	            }
	        }
	        if(f==1){
	            count++;
	        }
	    }
	}
	printf("%d",count);
    return 0;
}
