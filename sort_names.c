/*Documentiation
  Sai Chandu
  23-01-24
  sample input:
               Enter a size: 5
               Delhi
               Agra
               Kolkata
               Bengaluru
               Chennai
  sample output:
               The sorted names are:
               Agra
               Bengaluru
               Chennai
               Delhi
               Kolkata
  Description:Read n & n person names of maxlen 20, sort and print the names 
*/  
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void sort_names(char (*)[20], int);
void swap(char *,char *,int);
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    char (*name)[20];
    name = malloc(size*(sizeof(char)));
    printf("Enter the %d names of length max 20 characters in each\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%s",name[i]);
    }
    sort_names(name,size);
    printf("The sorted names are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%s\n",name[i]);
    }
    free(name);
}
void sort_names(char (*name)[20], int s)
{
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                swap(name[i],name[j],20);
            }
        }
    }
}
void swap(char *name1,char *name2,int n)
{
    char temp;
    for(int i=0;i<n;i++)
    {
        temp=name1[i];
        name1[i]=name2[i];
        name2[i]=temp;
    }
}