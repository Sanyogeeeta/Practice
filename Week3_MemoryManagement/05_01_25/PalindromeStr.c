#include<stdio.h>
#include<string.h>

int main(){
    char str[]="hello";
    int len=strlen(str);
    int flag=0;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Its Palindrome\n");
    else
        printf("Not Palindrome\n");
    
    return 0;
}