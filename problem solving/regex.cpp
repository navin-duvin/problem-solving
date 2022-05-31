/*
		Enter two string from cmd check whether substring present in substring that follows second string pattern they asked to 
		implement regex for * without using builtin
		
		abcd a*cd answer:yes
		aaaa a* answer:yes
		a*c a*c answer:yes
		adsd as answer:no
*/

using namespace std;
#include <iostream>

int main(){
	
	string s1;
	string s2;
	
	cout<<"Enter the string:"<<endl;
	cin>>s1;
	cout<<"Enter the second string:"<<endl;
	cin>>s2;
	
	int i=0,j=0,flag=1;
	
	for(i=0;s2[i]!='\0';j++){
		cout<<s2[i]<<" "<<s1[j]<<endl;
		if(s2[i]!='*' && s2[i]!=s1[j]){
			flag=0;
			break;
		}
		if(s2[i]!='*'|| s2[i+1]==s1[j+1]){
			i++;
		}
	}
	if(flag==1){
		printf("yes");
	}else{
		printf("No");
	}
	
}


