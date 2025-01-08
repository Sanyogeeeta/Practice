#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[500];
    int matrix[10][10];
    int row=0,col=0;
    scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='[')
            col=0;
        else if(isdigit(str[i])){
            int temp=0;
            while(i<len && isdigit(str[i])){
                temp=temp*10+(str[i]-'0');
                i++;
            }
            matrix[row][col]=temp;
            col++;
            i--;
        }
        else if(str[i]==']')
            row++;
    }
    
    int top=0,bottom=row-2,left=0,right=col-1;
    printf("[");
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
         if(top==0&& i==0)
             printf("%d",matrix[top][i]);
         else
             printf(" %d",matrix[top][i]);
         }
         top++;
         for(int i=top;i<=bottom;i++)
             printf(" %d",matrix[i][right]);
         right--;
         if(top<=bottom){
              for(int i=right;i>=left;i--)
                  printf(" %d",matrix[bottom][i]);
              bottom--;
         }
         if(left<=right){
              for(int i=bottom;i>=top;i--)
                  printf(" %d",matrix[i][left]);
              left++;
         }

     }
    printf("]\n");
    return 0;
        
}