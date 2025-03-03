#include <stdio.h>
#include<stdlib.h>
float variance(int *, int);

int main()
{
    int size;
    //printf("Enter the no.of elements: ");
    scanf("%d",&size);
    int *ptr=malloc(size*sizeof(int));
    //printf("Enter the %d elements:\n",size);
    for(int i=0;i<size;i++)
    {
        //printf("[%d] -> ",i);
        scanf("%d",&ptr[i]);
    }
    float vari=variance(ptr,size);
    printf("Variance is %f",vari);
}
float variance(int *arr,int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum=sum+arr[i];
    }
    float mean=(float)sum/s;
    sum=0;
    for(int i=0;i<s;i++)
    {
        arr[i]=arr[i]-mean;
    }
    for(int i=0;i<s;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
    for(int i=0;i<s;i++)
    {
        sum=sum+arr[i];
    }
    mean=(float)sum/s;
    return mean;
}