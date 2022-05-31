#include<stdio.h>
#include<string.h>

int main(){
	int m,n;
	printf("\nNumber of strings: ");
	scanf("%d %d",&m,&n);
	int count=0,len1,i,j,flag=0;
	char str[m][n];

	for(i=0;i<m;i++){
		scanf("%s",str[i]);
	}

	 for(i=0;i<m;i++){
	 	for(j=i+1;j<n;j++){
	 		if(str[i][strlen(str[i])-1]==str[j][0]){
	 			count++;
	 			flag=1;
	 			break;
	 		}

		}
	 }
	 if(flag==0)
	 	printf("\n-1");
	 else
	 	printf("\n%d",count+1);
	return 0;
}


       
       
       
       
