#include<stdio.h>
#include<stdlib.h>

int main(){

    int **arr;
    int rows,col;
    int* cols;
    scanf("%d",&rows);
    arr=(int **)malloc(rows*sizeof(int *));
    cols=(int *)malloc(sizeof(int)*rows);
    for(int i=0;i<rows;i++){
        scanf("%d",&cols[i]);
        arr[i]=(int *)malloc(cols[i]*sizeof(int));
        for(int j=0;j<cols[i];j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols[i];j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}