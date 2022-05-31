#include <string.h>
#include<stdio.h>

int main(){
	char str[20];
	printf("Enter the paranthesis only in ( and ) :\n");
    
	scanf("%s",str);
	int opencount=0,closecount=0;
	int count;
	int nonclosecount=0,nonopencount=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='('){
			opencount++;
			//count++;	
			for(int j=i+1;str[j]!='\0';j++){
				if(str[j]==')'){
					closecount++;
				}
			}
		}
			
		if(str[i]==')'){
			nonopencount++;
			 for(int k=i+1;str[k]!='\0';k++){
			 	if(str[i]=='('){
			 		nonclosecount++;
			 	}
			 }
		}
	}

	if(opencount!=0){
		printf("%d ",opencount);
	}
	if(nonclosecount-nonopencount==0){
		printf("-1");
	}
	
	
	return 0;
}