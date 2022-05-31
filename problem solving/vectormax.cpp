//Find the maximum of all integers that you read using vector.
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> vec;
    int n,max;
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
     	max = *itr;
	 } 
     
     cout<<"\nMaximum element: "<<max;
    return 0;
}
