/*Documentiation
  Sai Chandu
  23-01-24
  sample input:
               Enter no.of rows : 3
               Enter no of columns in row[0] : 4
               Enter no of columns in row[1] : 3
               Enter no of columns in row[2] : 5
               Enter 4 values for row[0] : 1 2 3 4
               Enter 3 values for row[1] : 2 5 9
               Enter 5 values for row[2] : 1 3 2 4 1
  sample output:
                Before sorting output is:
                1.000000 2.000000 3.000000 4.000000 2.500000
                2.000000 5.000000 9.000000 5.333333
                1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
                After sorting output is:
                1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
                1.000000 2.000000 3.000000 4.000000 2.500000
                2.000000 5.000000 9.000000 5.333333
  Description:to implement fragments using array of pointers
*/  
#include <stdio.h>
#include<stdlib.h>
int fragments(int, int [],float *[]);

int main()
{
    int row;
    printf("Enter no.of rows : ");
    scanf("%d",&row);
    float *ptr[row];
    int col[row];
    for(int i=0;i<row;i++)
    {
        printf("Enter no of columns in row[%d] : ",i);
        scanf("%d",&col[i]);
    }
    for(int i=0;i<row;i++)
    {
        ptr[i]=malloc((col[i]+1)*sizeof(float));
    }
    for(int i=0;i<row;i++)
    {
        printf("Enter %d values for row[%d] : ",col[i],i);
        for(int j=0;j<col[i];j++)
        {
            scanf("%f",&ptr[i][j]);
        }
    }
    fragments(row,col,ptr);
}
int fragments(int row,int col[],float *ptr[])
{
    for(int i=0;i<row;i++)
    {
        float sum=0;
        int j;
        for(j=0;j<col[i];j++)
        {
            sum=sum+ptr[i][j];
        }
        ptr[i][j]=sum/col[i];
    }
    printf("Before sorting output is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=col[i];j++)
        {
            printf("%8f ",ptr[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<row;i++)
    {
        for(int j=0;j<row-i;j++)
        {
            if(ptr[j][col[j]]>ptr[j][col[j+1]])
            {
                float *temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
                int temp1=col[j];
                col[j]=col[j+1];
                col[j+1]=temp1;
            }
        }
    }
    printf("After sorting output is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=col[i];j++)
        {
            printf("%8f ",ptr[i][j]);
        }
        printf("\n");
    }
}