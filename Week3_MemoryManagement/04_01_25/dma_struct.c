#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct user{
    int id;
    char *name;
}user;

int main(){
    //user* u;
    user * u[5];
    char name[25];
    // scanf("%d",&u->id);
    // scanf("%s",name);
    // u->name=(char *)malloc(sizeof(char)*(strlen(name)+1));
    // u->name=name;
    // printf("%d %s\n",u->id,u->name);
    for(int i=0;i<5;i++){
        u[i]=(user *)malloc(sizeof(user));
        scanf("%d",&u[i]->id);
        scanf("%s",name);
        u[i]->name=(char *)malloc(sizeof(char)*(strlen(name)+1));
        strcpy(u[i]->name,name);
    }
    for(int i=0;i<5;i++){
        printf("%d %s\n",u[i]->id,u[i]->name);
    }
}