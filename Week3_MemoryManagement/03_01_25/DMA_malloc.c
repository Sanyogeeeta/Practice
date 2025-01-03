#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n;
    int* arr;
    char* str;

    scanf("%d",&n);

    arr=(int *)malloc(sizeof(int)*n);
    str=(char *)malloc(sizeof(char)*(n+1));
    if(str==NULL || arr==NULL) printf("Error");
    getchar();
     
    fgets(str,n+1,stdin);

    while(getchar()!='\n');
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("%s",str);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    free(arr); 
    free(str);   
    return 0;
}