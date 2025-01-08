#include<stdio.h>

int main(){
    char str[]="HeLlO WoRld";
    int n=sizeof(str)/sizeof(str[0]);

    //Toogle case
    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        else
            str[i]-=32;
    }
    printf("%s\n",str);

    //Uppercase
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
    printf("%s\n",str);

    //lowercase
    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
    printf("%s\n",str);
}