#include <iostream>
using namespace std;

int main(){
    int num;
 	printf("Enter the number:\n");
 	scanf("%d",&num);
   	int i;
    for(i = 0;i<=num / 2; i++){
    	if(num==1){
    		cout<<"0"<<" ";
    		return 0;
		}
		if(num%2==0){
			i++;
		}
    	if(i==0){
    		cout<<0<<" ";
    		i++;
		}
        cout<<i<<" "<<-i<<" ";
    }
    return 0;
}
