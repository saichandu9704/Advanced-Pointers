 /*Documentiation
  Sai Chandu
  24-01-24
  sample output:
                Menu :
                1. Add element
                2. Remove element
                3. Display element
                4. Exit from the program
                Choice ---> 1
                Enter the type you have to insert:
                1. int
                2. char
                3. float
                4. double
                Choice ---> 2
                Enter the char : k
                1. Add element
                2. Remove element
                3. Display element
                4. Exit from the program
                Choice ---> 3
                -------------------------
                0 -> k
                -------------------------
                1. Add element
                2. Remove element
                3. Display element
                4. Exit from the program
                Choice ---> 1
                Enter the type you have to insert:
                1. int
                2. char
                3. float
                4. double
                Choice ---> 1
                Enter the int : 10
                1. Add element
                2. Remove element
                3. Display element
                4. Exit from the program
                Choice ---> 3
                ------------------------
                0 -> k (char)
                1 -> 10 (int)
                ------------------------
                1. Add element
                2. Remove element
                3. Display element
                4. Exit from the program
                Choice ---> 2
                0 -> k
                1 -> 10
                Enter the index value to be deleted : 0
                index 0 successfully deleted.
                1. Add element
                2. Remove element
                3. Display element
                4. Exit from the program
                Choice ---> 4
  Description:provide a menu to manipulate or display the value of variable of type t
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *ptr = malloc(8);
    char char_flag1=0,char_flag2=0,int_flag=0,float_flag=0,short_flag=0,double_flag=0;
    printf("Menu :\n");
    while(1)
    {
        printf("1. Add element\n");
        printf("2. Remove element\n");
        printf("3. Display element\n");
        printf("4. Exit from the program\n");
        printf("Choice ---> ");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter the type you have to insert:\n");
                    printf("1. char\n");
                    printf("2. short\n");
                    printf("3. int\n");
                    printf("4. float\n");
                    printf("5. double\n");
                    int ch;
                    printf("choice ---> ");
                    scanf("%d",&ch);
                    switch(ch)
                    {
                        case 1:
                                if(double_flag==0)
                                {
                                    if(char_flag1==0)
                                    {
                                        printf("Enter the char : ");
                                        scanf(" %c",(char *)ptr);
                                        char_flag1=1;
                                    }
                                    else if(char_flag2==0)
                                    {
                                        printf("Enter the char : ");
                                        scanf(" %c",(char *)ptr+1);
                                        char_flag2=1;
                                    }
                                    else
                                    {
                                        printf("No memory space\n");
                                    }
                                }
                                else
                                {
                                    printf("No memory space\n");
                                }
                                break;
                        case 2:
                                if(double_flag==0)
                                {
                                    if(short_flag==0)
                                    {
                                        printf("Enter the short : ");
                                        scanf("%hd",(short *)ptr+1);
                                        short_flag=1;
                                    }
                                    else
                                    {
                                        printf("No memory space\n");
                                    }
                                }
                                else
                                {
                                    printf("No memory space\n");
                                }
                                break;
                        case 3:
                                if(double_flag==0 && float_flag==0)
                                {
                                    if(int_flag==0)
                                    {
                                        printf("Enter the int : ");
                                        scanf("%d",(int *)ptr+1);
                                        int_flag=1;
                                    }
                                    else
                                    {
                                        printf("No memory space\n");
                                    }
                                }
                                else
                                {
                                    printf("No memory space\n");
                                }
                                break;
                        case 4:
                                if(double_flag==0 && int_flag==0)
                                {
                                    if(float_flag==0)
                                    {
                                        printf("Enter the float : ");
                                        scanf("%f",(float *)ptr+1);
                                        float_flag=1;
                                    }
                                    else
                                    {
                                        printf("No memory space\n");
                                    }
                                }
                                else
                                {
                                    printf("No memory space\n");
                                }
                                break;
                        case 5:
                                if(double_flag==0 && (char_flag1==0 && char_flag2==0 && short_flag==0 && int_flag==0 && float_flag==0))
                                {
                                    printf("Enter the double : ");
                                    scanf("%lf",(double *)ptr);
                                    double_flag=1;
                                }
                                else
                                {
                                    printf("No memory space\n");
                                }
                                break;
                        default:
                                printf("Invalid Choice\n");
                    }
                    break;
            case 2:
                    if(char_flag1==1)
                    {
                        printf("0 -> %c\n",*((char *)ptr));
                    }
                    if(char_flag2==1)
                    {
                        printf("1 -> %c\n",*((char *)ptr+1));
                    }
                    if(short_flag==1)
                    {
                        printf("2 -> %d\n",*((short *)ptr+1));
                    }
                    if(int_flag==1)
                    {
                        printf("4 -> %d\n",*((int *)ptr+1));
                    }
                    if(float_flag==1)
                    {
                        printf("4 -> %f\n",*((float *)ptr+1));
                    }
                    if(double_flag==1)
                    {
                        printf("0 -> %f\n",*((double *)ptr));
                    }
                    printf("Enter the index value to be deleted : ");
                    int ch1;
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 0:
                                if(char_flag1==1)
                                {
                                    char_flag1=0;
                                }
                                else
                                {
                                    double_flag=0;
                                }
                                printf("index 0 successfully deleted.\n");
                                break;
                        case 1:
                                if(char_flag2==1)
                                {
                                    char_flag2=0;
                                }
                                printf("index 1 successfully deleted.\n");
                                break;
                        case 2:
                                if(short_flag==1)
                                {
                                    short_flag=0;
                                }
                                printf("index 2 successfully deleted.\n");
                                break;
                        case 4:
                                if(int_flag==1)
                                {
                                    int_flag=0;
                                }
                                else
                                {
                                    float_flag=0;
                                }
                                printf("index 4 successfully deleted.\n");
                                break;
                        default:
                                printf("Invalid choice\n");
                    }
                    break;
            case 3:
                    printf("------------------------\n");
                    if(char_flag1==1)
                    {
                        printf("0 -> %c (char)\n",*((char *)ptr));
                    }
                    if(char_flag2==1)
                    {
                        printf("1 -> %c (char)\n",*((char *)ptr+1));
                    }
                    if(short_flag==1)
                    {
                        printf("2 -> %d (short)\n",*((short *)ptr+1));
                    }
                    if(int_flag==1)
                    {
                        printf("4 -> %d (int)\n",*((int *)ptr+1));
                    }
                    if(float_flag==1)
                    {
                        printf("4 -> %f (float)\n",*((float *)ptr+1));
                    }
                    if(double_flag==1)
                    {
                        printf("0 -> %f (double)\n",*((double *)ptr));
                    }
                    printf("------------------------\n");
                    break;
            case 4:
                    return 0;
            default:
                    printf("Invalid Choice!");
        }
    }
}
