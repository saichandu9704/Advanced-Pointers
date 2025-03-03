/*Documentiation
  Sai Chandu
  21-01-24
  sample input:Enter the size: 2
               Enter any number in Hexadecimal: ABCD
  sample output:After conversition CDAB
  Description:to convert Little Endian data to Big Endian
*/  
#include<stdio.h>
void swap(char *,int);
int main()
{
    int size;
    printf("Enter the size(2 for short,4 for int): ");
    scanf("%d",&size);
    if(size==2)
    {
        short num1;
        printf("Enter any number in Hexadecimal: ");
        scanf("%hX",&num1);
        char *ptr = (char *)&num1;
        swap(ptr,size);
        printf("After conversion :%hX",num1);
    }
    else if(size==4)
    {
        int num2;
        printf("Enter any number in Hexadecimal: ");
        scanf("%X",&num2);
        char *ptr = (char *)&num2;
        swap(ptr,size);
        printf("After conversion :%X",num2);
    }
    else
    {
        printf("Invalid Size");
    }
}
void swap(char *ptr,int n)
{
    char temp;
    for(int i=0;i<n/2;i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }
}