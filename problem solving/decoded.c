/*
    123 --> ABC,AW,LC --> 3 
*/
#include <stdio.h>
#include <string.h>

int decode(char* digit,int n){
    if(digit[0]=='0'){
        return 0;
    }
    
    if(n==0 || n==1){
        return 1;
    }
    
    int count=0;
    
    if(digit[n-1]>'0'){
        count =decode(digit,n-1);
    }
    if(digit[n-2]=='1'|| (digit[n-2]=='2' && digit[n-1]<'7')){
        count+=decode(digit,n-2);
    }
    
    return count;
}

int main(){
    char str[200];int n;
    printf("Enter the string:\n");
    
    scanf("%s",str);
    //for(int n=0;str[n];n++);
    n = strlen(str);
   // int c=decode(str,n);
    printf("%d",decode(str,n));
    return 0;
}