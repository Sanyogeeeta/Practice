#include<stdio.h>
#include<stdlib.h>

int main(){
    int* arr;
    int n;
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}