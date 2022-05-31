//Find the summation of all vector elements.
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> vec;
    int n,sum=0;
    cout<<"Enter the number:\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    cout<<"After sorting:\n";
     for(auto itr=vec.begin();itr!=vec.end();++itr){
     	cout<<*itr<<" ";
     	sum += *itr;
	 } 
     
     cout<<"\nsum of all element: "<<sum;
    return 0;
}
