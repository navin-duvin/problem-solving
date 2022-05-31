/*
    input: i love india
    output: india love i
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    char cpy[100][100];
    printf("Enter the string:\n");
    //fgets(str,sizeof(str),stdin);
    scanf("%[^\n]s",str);
    int wd=0,ch=0;
    for(int i=0;str[i];i++){
        if(str[i]!=32){
            cpy[wd][ch++]=str[i];
        }else{
            cpy[wd][ch]=0;
            wd++;
            ch=0;
        }
    }
    cpy[wd][ch]=0;
    
    for(int i=wd;i>=0;i--){
        printf("%s ",cpy[i]);
    }
    //printf("\b");
    return 0;
}