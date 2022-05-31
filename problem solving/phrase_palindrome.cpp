#include <iostream>
#include <string>

using namespace std;

int main(){
    string S="";
    string s;
    cout<<"Enter the phrase:"<<endl;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }if(!(s[i]>='a' && s[i]<='z' && s[i]>='0' && s[i]<='9')){
                s[i]='@';
            } 
            if(s[i]>='0' && s[i]<='9'){
                s[i]=s[i];
            }
            
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='@'){
            S+=s[i];
        }
    }
    if(S.size()==0){
        S=S+' ';
    }
    cout<<S<<endl;
    int len=S.size();
    cout<<"Length of string: "<<len;
    
    int flag=0;
    for(int i=0;S[i]!='\0';i++){
        if(i==len){
            break;
        }
        if(S[i]==S[len-1]){
            flag=1;
        }else{
            flag=0;
            break;
        }
    }
    
    if(flag==1){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    return 0;
}