/*Documentiation
  Sai Chandu
  22-01-24
  sample input:Enter a number: 3
  sample output:
                8   1   6
                3   5   7
                4   9   2
  Description:to generate a n*n magic square
*/  
#include <stdio.h>
#include <stdlib.h>
void magic_square(int **, int);

int main()
{
    int num;
    //printf("Enter a number: ");
    scanf("%d",&num);
    if(num&1)
    {
        int **arr;
        arr = calloc(num,sizeof(int *));
        for(int i=0;i<num;i++)
        {
            arr[i]=calloc(num,sizeof(int));
        }
        magic_square(arr,num);
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error : Please enter only positive odd numbers");
    }
}
void magic_square(int **arr,int num)
{
    int row=0,col=num/2;
                arr[row][col]=1;
                for(int i=2;i<=(num*num);i++)
                {
                    row--;
                    col++;
                    if(row<0)
                    {
                        row=num-1;
                    }
                    if(col>=num)
                    {
                        col=0;
                    }
                    if(arr[row][col] != 0)
                    {
                        col--;
                        row++;
                        if(col<0)
                        {
                            col=num-1;
                        }
                        if(row>=num)
                        {
                            row=0;
                        }
                        row++;
                        arr[row][col]=i;
                    }
                    else
                    {
                        arr[row][col]=i;
                    }
                }
}