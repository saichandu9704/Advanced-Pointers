/*Documentiation
  Sai Chandu
  27-01-24
  sample input:
            1. Int
            2. char
            3. short
            4. float
            5. double
            6. string
            Enter you choice : 1
            Enter the num1 : 10
            Enter the num2 : 20
  sample output:
            After Swapping :
            num1 : 20
            num2 : 10
  Description:to define a macro swap (t,x,y) that swaps 2 arguments of type t 
*/  
#include<stdio.h>
#include<stdlib.h>
#define SWAP(type,x,y) \
{                      \
    type temp=x;       \
    x=y;               \
    y=temp;            \
}
int main()
{
    int ch,num1,num2;
    char ch1,ch2;
    short s1,s2;
    float f1,f2;
    double d1,d2;
    printf("1. Int\n");
    printf("2. char\n");
    printf("3. short\n");
    printf("4. float\n");
    printf("5. double\n");
    printf("6. string\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                printf("Enter the num1 : ");
                scanf("%d",&num1);
                printf("Enter the num2 : ");
                scanf("%d",&num2);
                SWAP(int,num1,num2);
                printf("After Swapping : \n");
                printf("num1 : %d\n",num1);
                printf("num2 : %d\n",num2);
                break;
        case 2:
                printf("Enter the ch1 : ");
                scanf(" %c",&ch1);
                printf("Enter the ch2 : ");
                scanf(" %c",&ch2);
                SWAP(char,ch1,ch2);
                printf("After Swapping : \n");
                printf("ch1 : %c\n",ch1);
                printf("ch2 : %c\n",ch2);
                break;
        case 3:
                printf("Enter the s1 : ");
                scanf("%hd",&s1);
                printf("Enter the s2 : ");
                scanf("%hd",&s2);
                SWAP(short,s1,s2);
                printf("After Swapping : \n");
                printf("s1 : %hd\n",s1);
                printf("s2 : %hd\n",s2);
                break;
        case 4:
                printf("Enter the f1 : ");
                scanf("%f",&f1);
                printf("Enter the f2 : ");
                scanf("%f",&f2);
                SWAP(float,f1,f2);
                printf("After Swapping : \n");
                printf("f1 : %f\n",f1);
                printf("f2 : %f\n",f2);
                break;
        case 5:
                printf("Enter the d1 : ");
                scanf("%lf",&d1);
                printf("Enter the d2 : ");
                scanf("%lf",&d2);
                SWAP(double,d1,d2);
                printf("After Swapping : \n");
                printf("d1 : %f\n",d1);
                printf("d2 : %f\n",d2);
                break;
        case 6:
        {
                char *str1=malloc(50*sizeof(char *));
                char *str2=malloc(50*sizeof(char *));
                printf("Enter the str1 : ");
                scanf(" %[^\n]",str1);
                printf("Enter the str2 : ");
                scanf(" %[^\n]",str2);
                SWAP(char *,str1,str2);
                printf("str1 : %s\n",str1);
                printf("str2 : %s\n",str2);
                break;
        }
        default:
                printf("Invalid choice");
    }
}