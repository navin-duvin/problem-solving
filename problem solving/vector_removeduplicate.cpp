//Create a vector that stores a set of characters and print them in reverse order 
//by using rbegin() and rend() and also remove the duplicates.

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    vector<char> vec;
    vector<char> rem;
    int n,sum=0;
    cout<<"Enter the size of characters:\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        vec.push_back(ch);
    }
    int i,j,k;
    cout<<"After removing duplicates characters :\n";
   for(int i=0;i<vec.size();i++){
   	for(int j=i+1;j<vec.size();j++){
   		if(vec[i]==vec[j]){
   			vec[j]='0';
		   }
	   }
   }
     for(auto itr=vec.rbegin();itr!=vec.rend();itr++){
     	if(*itr!='0'){
     		cout<<*itr<<" ";
		 }
     }
    return 0;
}
/*//Create a vector that stores a set of characters and print them in reverse order 
//by using rbegin() and rend() and also remove the duplicates.

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    vector<char> vec;
    vector<char> rem;
    int n,sum=0;
    cout<<"Enter the size of characters:\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        vec.push_back(ch);
    }
    int i,j,k;
    cout<<"After removing duplicates characters :\n";
   for(int i=0;i<vec.size();i++){
   	for(int j=i+1;j<vec.size();j++){
   		if(vec[i]==vec[j]){
   			//vec[j]='0';
   			vec.erase(vec.begin()+j);
		   }
	   }
   }
     for(auto itr=vec.rbegin();itr!=vec.rend();itr++){
     	//if(*itr!='0'){
     		cout<<*itr<<" ";
		 //}
     }
    return 0;
}*/
