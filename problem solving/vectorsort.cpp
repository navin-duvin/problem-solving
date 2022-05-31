//	Sort the set of integers read using vector.

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> vec;
    int n;
    cout<<"Enter the number:\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    cout<<"After sorting:\n";
     for (const auto &i: vec){
          cout<<i<<" ";
     }
     
    return 0;
}
