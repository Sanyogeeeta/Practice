#include<stdio.h>
#include<string.h>

int main(){
    char str[]="aabbccd";
    int uniqueChar[20]={0};
    for(int i=0;i<strlen(str);i++){
        for(int j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]){
                uniqueChar[i]=1;
                uniqueChar[j]=1;
            }
        }
    }
    for(int i=0;i<strlen(str);i++){
        if(uniqueChar[i]==0){
            printf("%c",str[i]);
            break;
        }
    }
    return 0;
}