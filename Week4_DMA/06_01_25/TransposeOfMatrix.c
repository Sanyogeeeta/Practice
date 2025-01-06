#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    int **matrix;

    scanf("%d",&size);
    matrix=(int **)malloc(sizeof(int*)*size);

    for(int row=0;row<size;row++){
        matrix[row]=(int *)malloc(sizeof(int)*size);
        for(int col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
            //matrix[row][col]=1;
        }
    }

    for(int row=0;row<size;row++){
        for(int col=row;col<size;col++){
            int temp=matrix[row][col];
            matrix[row][col]=matrix[col][row];
            matrix[col][row]=temp;
        }
    }

    for(int row=0;row<size;row++){
        for(int col=0;col<size;col++){
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }

    for(int i=0;i<size;i++)
        free(matrix[i]);
    
    free(matrix);
    return 0;
}