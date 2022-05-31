/*
    sort an array in a one swap whose two elements aare swapped whithout temp variable
    arr = {10,20,60,40,50,30}
    o.p= {10,20,30,40,50,60}

*/

#include <stdio.h>

int main(){
    int arr[]={10,20,70,30,50,60,};
    int n=sizeof(arr)/sizeof(arr[0]);
    int check;
    for(int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            check=i-1;
            
            while(check>=0 && arr[i]<arr[check]){
                check--;
                arr[i]^=arr[check+1]^=arr[i]^=arr[check+1];
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}