//occurence i.p="computer"
//			s2="cat"
//			o/p="ompuer"


using namespace std;
#include <iostream>
#include <string>

int main(){

    char str[]="computer";
    char rem[]="cat";
    char cpy[20];
    int i,j,k=0,f = 1;
    for(i=0;str[i]!='\0';i++){
        f = 1;
        for(int j=0;rem[j]!='\0';j++){
            if(rem[j]==str[i]){
                f = 0;
                break;
            }
        }
        if(f){
        cpy[k]+=str[i];
        k++;
        }
    }
    cpy[k] = '\0';
    cout<<cpy;
    return 0;
}