#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct revenue{
    char comp_name[50];
    int *countries_rev;
}revenue;

int main(){
    int no_of_companies,no_of_countries;
    revenue* company;
    char name[50];
    char** result;
    int *annual_revenue;
    
    scanf("%d",&no_of_companies);
    scanf("%d",&no_of_countries);

    company=(revenue*)malloc(sizeof(revenue)*no_of_companies);
    annual_revenue=(int *)malloc((sizeof(int)*no_of_companies));
    result=(char**)malloc(sizeof(char*)*no_of_companies);

    for(int i=0;i<no_of_companies;i++)
        annual_revenue[i]=0;
    
    for(int i=0;i<no_of_companies;i++){
        scanf("%s ",name);
        strcpy(company[i].comp_name,name);
        company[i].countries_rev=(int *)malloc(sizeof(int)*no_of_countries);
        for(int j=0;j<no_of_countries;j++){
            scanf("%d",&company[i].countries_rev[j]);
            annual_revenue[i]+=company[i].countries_rev[j];
        }
    }
    int max_revenue=annual_revenue[0];
    for(int i=1;i<no_of_companies;i++){
        if(annual_revenue[i]>=max_revenue){
            max_revenue=annual_revenue[i];
        }
    }

    int k=0;
    for(int i=0;i<no_of_companies;i++){
        if(annual_revenue[i]==max_revenue){
            result[k]=(char*)malloc(sizeof(char)*strlen(company->comp_name));
            result[k]=company[i].comp_name;
            k++;
        }
    }

    for(int i=0;i<k;i++){
        printf("%s\n",result[i]);
    }
    free(result);
    
    for(int i=0;i<no_of_companies;i++){
        free(company[i].countries_rev);
    }

    free(company);
    free(annual_revenue);
    return 0;
}