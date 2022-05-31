/*
    input: a1b10
    output:abbbbbbbbbb
*/

#include <stdio.h>

int main(){
    char str[200];
    printf("Enter the string:\n");
    scanf("%s",str);
    int  num=0;
    char aplha;
    
    for(int i=0;str[i];i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            if(aplha!=0){
                for(int j=0;j<num;j++) printf("%c",aplha);
                 num=0;
            }
            aplha=str[i];
        }else{
            num = num*10+str[i]-48;
        }
        for(int j=0;j<num;j++) printf("%c",aplha);
       
    }
   // printf("%d ",num);
}