/* Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search 
for substring like “too” in the two dimensional string both from left to right and from top to bottom.
w e L C O
M E T O Z
O H O C O
R P O R A
T I O N 
And print the start and ending index as
Start index : <1,2>
End index: <3, 2>*/

#include<stdio.h>
#include <string.h>

int main(){ 
    char str[200];
    char mat[10][10];
    char sub[10];
    printf("Enter the string:\n");
    scanf("%s",str);
    
    int len =strlen(str);
    printf("Length of string:%d\n",len);
    int dim=1,k,d=0;
    while(dim*dim<len)dim++;
    
    printf("Inserting elements:\n");
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if(k<=len){
                mat[i][j]=str[k++];
            }else{
                mat[i][j]=32;
            }
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the substring:\n");
    scanf("%s",sub);
    
    
    printf("Dimesion:%d\n",dim);
    
    
    printf("Substring found at loaction:\n");
    int x=0;
   
    for(int i=0;i<dim;i++){
        x=0;
        for(int j=0;j<dim;j++){
             int flag=0,count=0;
             if(mat[i][j]==sub[x]){
                int flag=0,count=0;
                while(sub[++x]){
                    count++;
                    if(sub[x]!=mat[i][++j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    printf("(%d,%d),(%d,%d)",i,j-count,i,j);
                }
            }
        }
    }
    
    int flag=0;
    for(int j=0;j<dim;j++){
        x=0;
        for(int i=0;i<dim;i++){
             int flag=0,count=0;
             if(mat[j][i]==sub[x]){
                int flag=0,count=0;
                while(sub[++x]){
                    count++;
                    if(sub[x]!=mat[++j][i]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    printf("(%d,%d),(%d,%d)",j-count,i,j,i);
                }
            }
        }
    }
    return 0;
}