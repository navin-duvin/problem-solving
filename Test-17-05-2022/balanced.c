#include<stdio.h>
#include<string.h>

char stack[50];
int i,top=-1,flag=0;
static int count=0;

void push(char element){
	top++;
	stack[top]=element;
}
int pop(){
if(top!=-1){
	count++;
	top--;
}
}

int main(){
		char str[50];
		printf("Enter paranthesis: ");
		scanf("%s",str);

		if(str[0]!=')'){
		for(i=0;i<strlen(str);i++){
			if(str[i]=='(')
				push(str[i]);
			else
				pop(str[i]);
		}
			flag=1;
		}

		if(flag==1)
		printf("\n%d",count);
		else
		printf("\n-1");

		return 0;
}
