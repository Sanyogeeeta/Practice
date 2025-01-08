#include<stdio.h>

int main(){
    char str[]="programming                  in      c";
    char result[500];
    int i=0,j=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            result[j++]=' ';
            while(str[i]==' ')
                i++;
        }
        result[j++]=str[i++];
    }
    printf("%s\n",result);
    return 0;
}