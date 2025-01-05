#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void concatenate( char *str1,char *str2){
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    int j=0;
    while(str2[j]!='\0'){
        str1[i+j]=str2[j];
        j++;
    }
}
int main(){
    char str1[50],str2[10];
    int len,len1,len2;
    scanf("%s",str1);
    scanf("%s",str2);
    concatenate(str1,str2);
    printf("%s",str1);
}