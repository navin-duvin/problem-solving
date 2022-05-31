#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct user{
	char name[30];
	char mailid[50];
	int mobile_number[10];
	char pass[50];
	int hid;
	float RC;
	int zid;
}user[20];


struct agent{
	char agentname[30];
	char mailid[50];
	char agentpass[60];
}agent={"Zcoinuser","ze@gmail.com","test"};


int usercount=0;
int id=100;

int createaccount();


void userportal(){
	int zid;
	printf("USER PORTAL:\n");
	printf("Enter the ZE employee\n");
	scanf("%d",&zid);
    
	for(int j=0;j<usercount;j++){
		if(user[j].zid==zid){
			printf("Your Zid is available:\n");
			printf("Name:%s\t\tMailid:%s\t\tHID:%d\t\tUserid:%d\t\tZID:%d\t\t",user[j].name,user[j].mailid,user[j].hid,user[j].userid,user[j].zid);

		}
	}
}

int Password(char * p){    
    int S,N,A;
    S=N=A=0;
    char t[10];
    printf("Re enter password:");
    scanf("%s",t);
    if(strlen(p)<6)
    {
        printf("\nPassword must be minimum six digits");
        getch();
    } 
    for(int k=0;k<strlen(p);k++)
      {
          if(p[k]!=t[k])
          {
              printf("\nThe Passwords are Not matching");
              getch();
          }
          if(p[k]>=48 && p[k]<=58)
          N++;
          else if(p[k]>=97 && p[k]<=122)
          S++;
          else if(p[k]>=65 && p[k]<=90)
          A++;
      }
      if(S<2||A<2||N<2)
      {
          printf("\nThe password must contains atleast 2 lowercase and 2 Upper case and 2 Numbers\n");
          return 0;
      getch();
          
}

void agentportal(){

	int ok;
		//if(usercount>0){
			printf("Approval needed for user:\n");
			//printf("Name:%s\tMailid:%s\tHid:%d\tZid:\t");
			printf("Enter the user approval:\n0.approved\n1.Unapproved\n");
			scanf("%d",&ok);

				if(ok==0){
					printf("Approved:\n");
					int empid;
					printf("%d",&empid);
					user[usercount].zid=empid;
					//printf("%s %s %d %d",user[usercount].name,user[usercount].mailid,user[usercount].hid,user[usercount].userid);
					printf("ZID for user:",user[usercount].zid);
					usercount++;
					userportal();
				}else if(ok==1){
					printf("UnApproved:\n");
					createaccount();
				}
		//}

		printf("Agent portal:\n");
}

void agentlogin(){
	char id[300],p[400];

	printf("Enter the email id:\n");
	scanf("%s",id);
	printf("Enter the password:\n");
	scanf("%s",p);

	if((strcmp(agent.mailid,id))==0  && (strcmp(agent.agentpass,p)==0)){
			printf("Authenticated successfully:\n");
			agentportal();
	}else{
		printf("mailid or password is incorrect:\n");
	}

	//agentportal();
}

int createaccount(){
	int f;
	char password[40];
	printf("CREATE USER ACCOUNT:\n");

	printf("Enter the username:\n");
	scanf("%s",user[usercount].name);
	printf("Enter the mailid:\n");
	scanf("%s",user[usercount].mailid);
	printf("Enter the mobile_number:\n");
	scanf("%s",user[usercount].mobile_number);

	printf("Enter the password:\n");
	scanf("%s",password);
	// strcpy(user[usercount].pass,password);
	
	f=checkpass(password);
	if(f==0){
		strcpy(user[usercount].pass,password);
	}
	if(f==-1){
		printf("Password validity failed\n");
		exit(0);
	}

	printf("Enter the real currency to deposit:\n");
	scanf("%f",&user[usercount].RC);
	user[usercount].hid=id;
	printf("ZE approval needed to login:\n");
	agentlogin();

}

void userlogin(){
	int f=0;
	char id[30],p[30];
	printf("Enter your mailid:\n");
	scanf("%s",id);

	for(int i=0;i<usercount;i++){
		if((strcmp(user[i].mailid,id))==0){
			printf("Enter the username and password:\n");
			scanf("%s",p);
			if((strcmp(user[i].pass,p))==0){
				printf("Authenticated successfully:\n");
				f=1;
				break;
			}
		}
	}

	if(f==0){
		printf("User not exist:\n");
	}
}


int  main(int argc, char const *argv[]){

	int choice;
	printf("=========================================================================\n");
	printf("                               WELCOME                                   \n");
	printf("                IN-APP CURRENCY MANAGEMENT SYSTEM                        \n");
	printf("=========================================================================\n");
	printf("\n");

	
	while(1){
		printf("Enter your choice:\n1.create user account\n2.login\n3.exit\n");
		scanf("%d",&choice);
		switch(choice){

			case 1:
				createaccount();
				break;
			case 2:
				int login;
				printf("Enter the choice:\n1.userlogin\n2.agent login\n");
				scanf("%d",&login);
				if(login==1){
					userlogin();
				}else if(login==2){
					agentlogin();
				}
			case 3:
				exit(0);
			default:
				printf("Enter the correct choice:\n");

		}
	}
	return 0;
}