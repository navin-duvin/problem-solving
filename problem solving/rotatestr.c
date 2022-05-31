#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str1[20];
	char str2[20];
	printf("Enter the string 1:\n");
	scanf("%s",str1);
	printf("Enter the string 2:\n");
	scanf("%s",str2);
	char cmp[20];
	int i,j,x,y,k=0;
	if(strlen(str1)!=strlen(str2)){
	    printf("false");
	    exit(0);
	}
	for(i=0;str1[i];i++){
		if(str1[i]==str2[0]){
			x=i;
			break;
		}
	}
	for(j=x;str1[j];j++){
				cmp[k]=str1[j];
				k++;
	}
	for(y=0;y<x;y++){
			cmp[k]=str1[y];
			k++;
	}
    int flag=0;
   for(int i=0;str2[i];i++){
       if(str2[i]==cmp[i]){
           flag=1;
       }else{
           flag=0;
           break;
       }
   }
   
   if(flag){
       printf("true");
   }else{
       printf("false");
   }
   return 0;
}
