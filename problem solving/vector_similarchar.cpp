//Create a vector that stores a set of characters and find the similar characters.
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    vector<char> vec;
    int n,sum=0;
    cout<<"Enter the size of characters:\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        vec.push_back(ch);
    }
    
    cout<<"finding similar characters :\n";
     for(auto itr=vec.begin();itr!=vec.end();itr++){
            for(auto jtr=itr+1;jtr!=vec.end();jtr++){
                if(*itr ==*jtr){
                    cout<<*itr<<" ";
                }
            }
	 } 
    return 0;
}
