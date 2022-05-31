#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("Enter the number of candies for alice and bob:\n");
	scanf("%d %d",&a,&b);
	int alice[a];
	int bob[b];
	int ans[2];
	int i,j;
	printf("Enter the alice candies:\n");
	for(i=0;i<a;i++){
		scanf("%d",&alice[i]);
	}
	printf("Enter the bob candies:\n");
	for(j=0;j<b;j++){
		scanf("%d",&bob[j]);
	}
	int alicesum=0,bobsum=0;
	
	for(j=0;j<b;j++){
		bobsum+=bob[j];
	}
	for(i=0;i<a;i++){
		alicesum+=alice[i];
	}
	printf("alicesum:%d\n", alicesum);
	printf("Bobsum:%d\n", bobsum);
	
		if(alicesum==bobsum){
			ans[0]=0;
			ans[1]=0;
			printf("%d, %d",ans[0],ans[1]);
		    exit(0);
		}
		
	for(i=0;i<2;i++){
		if(alice[i]<bob[i]){
				int temp;
				temp=alice[i];
				alice[i]=bob[i];
				bob[i]=temp;
		}else if(alice[i]>bob[i] && alicesum!=bobsum){
		    ans[0]=alice[i];
		    ans[1]=bob[i+1];
		    break;
		}
			for(j=0;j<2;j++){
				bobsum+=bob[j];
				alicesum+=alice[j];
			}
			if(alicesum==bobsum){
		    	ans[0]=bob[0];
			    ans[1]=alice[0];
			    break;
	    	}
		}
	
    for(i=0;i<2;i++){
        printf("%d ",ans[i]);
    }
	//printf("%d, %d",ans[0],ans[1]);
	
	return 0;
}
