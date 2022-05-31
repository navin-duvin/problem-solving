/*
    str1 : occurence
    str2: car
    o/p:ouene
*/

#include <stdio.h>

int main(){
    char str[]="occurence";
    char sub[]="caur";
    int f;
    for(int i=0;str[i];i++){
        f=1;
        for(int j=0;sub[j];j++){
            if(str[i]==sub[j]){
                f=0;break;
            }
        }
        if(f){
            printf("%c",str[i]);
        }
    }
    return 0;
}