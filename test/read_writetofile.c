#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct test{
    char name[20];
    char pass[30];
}s;

int main(){
    FILE *fp;
    fp=fopen("test.txt","w");
   
    char name[20]="navin";
    char pa[30]="Hr-#e$t98";
    
    strcpy(s.name,name);
    strcpy(s.pass,pa);
    char n[30],p[30];
    fprintf(fp,"%s %s\n",s.name,s.pass);
    fclose(fp);
     fp=fopen("test.txt","r");
     fscanf(fp,"%s %s",n,p);
     printf("%s %s",n,p);
     fclose(fp);
    return 0;
}