#include <stdio.h>


void findNumbers(int num){
	int i;
    for (i=1;i<=num / 2;i++) {
        //cout<<i<<" "<<-i<<" ";
        printf("%d %d",i,-i);
    }
    if (num % 2 == 1)
        //cout << 0;
		printf("0");
}

int main(){
    int num;
 	printf("Enter the number:\n");
 	scanf("%d",&num);
    findNumbers(num);
    return 0;
}
