#include <stdio.h>
#include <string.h>

struct balls{
	int blue;
	int red;
	int total;
}b={4,3,8};


int main(){

	char picker1[20],picker2[20];
	
	printf("Enter the ball to pickup:\n");
	int total=1;
	while(total!=0){
		int total=0;
			scanf("%s",picker1);
			scanf("%s",picker2);

		if((strcmp(picker1,"blue")==0) && (strcmp(picker2,"red")==0) || (strcmp(picker1,"red")==0) && (strcmp(picker2,"blue")==0)){
			b.red=b.red+1;
			b.red--;
			b.blue--;
			b.total = b.total-2;
	}
	if((strcmp(picker1,"blue")==0) && (strcmp(picker2,"blue")==0)){
			b.blue=b.blue+1;
			b.blue-=2;;
			b.total= b.total-2;
	}
	if((strcmp(picker1,"red")==0) && (strcmp(picker2,"red")==0)){
		b.red-=2;
		b.blue = b.blue +1;
		b.total = b.total-2;
	}

	total = b.blue + b.red;

	printf("Blue balls:%d\n",b.blue);
	printf("red balls:%d\n",b.red);
	printf("Total balls:%d",b.total);


	}
	
	
	return 0;
}