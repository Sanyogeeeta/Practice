#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //int *ptr;
    //ptr=(int *)malloc(sizeof(int));
    //scanf("%d",ptr);
    //printf("%d\n",*ptr);
    //float *arr;
    //int rows;
    //char s[20];
    char *str;
    int n;
    // scanf("%s",s);
    //scanf("%d",&rows);
    //arr=(float *)malloc(rows*sizeof(float));
    scanf("%d",&n);
    str=(char *)malloc((n+1)*sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    for(int i=0;i<n;i++){
        //printf("%f ",arr[i]);
        scanf(" %c",&str[i]);
    }
    str[n]='\0';
    printf("%s\n",str);

    return 0;
}