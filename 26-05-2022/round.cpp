#include <iostream>
#include <string>
using namespace std;

string convert(int sum){
    int rem,t;
    string str="";
    if(sum == 0) return "0";
    while(sum){
        rem= sum%10;
        char ch = (rem+'0');
        str = ch+str;
        sum =sum/10;
    }
    return str;
}

void split(string s,int k){
    if(s.size()<=k){
        cout<<s<<endl;
        return;
    }
	int i,j,x;
	string digit="";
	for(i=0;i<s.size();i+=k){
		int sum = 0;
		for(j=i;j<i+k;j++){
		    if(j<s.size())
			    sum += s[j]-'0';
		}
	//	cout<<sum<<" ";	
		digit += convert(sum);;
	}
// 	cout<<digit;
	
    split(digit,k);
}

int main(){
	string s;
	cout<<"Enter the string:"<<endl;
	cin>>s;
	int k;
	cout<<"Enter the k value:"<<endl;
	cin>>k;
	
	split(s,k);
    // cout<<convert(13) + convert(5);
	return 0;
}
