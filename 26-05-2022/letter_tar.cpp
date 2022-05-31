#include <iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter the size of character:\n";
	cin>>n;
	char ch[n];
	
	cout<<"Enter the element in the array:\n";

	for(i=0;i<n;i++){
		cin>>ch[i];
	}
	
	char tar;
	cout<<"Enter the target in the array:\n";
	cin>>tar;
		
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(ch[i]<ch[j]){
				char temp;
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		if(ch[i]>tar){
			tar=ch[i];
			break;
		}
	}
	cout<<tar;
	return 0;
}
