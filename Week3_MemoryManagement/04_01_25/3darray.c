#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z;
    int ***arr;
    scanf("%d %d %d",&x,&y,&z);
    int count=0;
    arr=(int***)malloc(x*sizeof(int **));
    for(int i=0;i<x;i++){
        arr[i]=(int**)malloc(y*sizeof(int *));
        for(int j=0;j<y;j++){
            arr[i][j]=(int*)malloc(z*sizeof(int));
            for(int k=0;k<z;k++){
                arr[i][j][k]=count++;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n\n");
    }
    return 0;
}