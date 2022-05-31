/*
1    1  
 2  2   
  3    
 4  4   
5    5 
*/

#include <stdio.h>
#include<string.h>

int main(){
    char str[20]="12345";
    //scanf("%s",str);
    int n=strlen(str);
    //printf("%d\n",n);
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==j || j==n-i-1){
                printf("%c ",str[i]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}