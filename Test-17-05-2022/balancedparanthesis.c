#include <stdio.h>
#include <string.h>

int top =-1;
char stack[20];
static int count=0;

void push(char data){
    top++;
    stack[top]=data;
}

int pop(){
    if(top!=-1){
        count++;
        top--;
    }
}
int main(){
    char str[20];
    printf("Enter the string: \n");
    scanf("%s",str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='('){
            push(str[i]);
        }else{
            pop();
        }
    }
    //printf("%d ",count);
    if(count!=0){
        printf("%d",count);
    }else{
        printf("-1");
    }
    
    return 0;
}