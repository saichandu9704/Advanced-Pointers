/*Documentiation
  Sai Chandu
  28-01-24
  sample input:
            Enter no.of students : 2
            Enter no.of subjects : 2
            Enter the name of subject 1 : Maths
            Enter the name of subject 2 : Science
            ----------Enter the student datails-------------
            Enter the student Roll no. : 1
            Enter the student 1 name : Nandhu
            Enter Maths mark : 99
            Enter Science mark : 91
            ----------Enter the student datails-------------
            Enter the student Roll no. : 2
            Enter the student 2 name : Bindhu
            Enter Maths mark : 88
            Enter Science mark : 78
            ----Display Menu----
            1. All student details
            2. Particular student details
            Enter your choice : 2
            
            ----Menu for Particular student----
            1. Name.
            2. Roll no.
            Enter you choice : 1
            Enter the name of the student : Nandhu
            Roll No.   Name           Maths         Science       Average       Grade
            1          Nandhu          99             91            95            A
            Do you want to continue to display(Y/y) : n
  Description:to implement the student record using array of structure
*/  
#include<stdio.h>
#include<string.h>
struct student
{
    int rolno;
    char name[20];
    float avg;
    char grade;
};
int main()
{
    int sno,subno;
    printf("Enter no.of students : ");
    scanf("%d",&sno);
    printf("Enter no.of subjects : ");
    scanf("%d",&subno);
    char subject[subno][20];
    for(int i=0;i<subno;i++)
    {
        printf("Enter the name of subject %d : ",i+1);
        scanf(" %[^\n]",subject[i]);
    }
    struct student s[sno];
    int marks[sno][subno];
    for(int i=0;i<sno;i++)
    {
        printf("---------Enter the stdent%d details---------\n",i+1);
        printf("Enter the student%d Roll no. : ",i+1);
        scanf("%d",&s[i].rolno);
        printf("Enter the student%d name : ",i+1);
        scanf(" %[^\n]",s[i].name);
        for(int j=0;j<subno;j++)
        {
            printf("Enter student%d %s marks : ",i+1,subject[j]);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<sno;i++)
    {
        int sum=0;
        for(int j=0;j<subno;j++)
        {
            sum=sum+marks[i][j];
        }
        s[i].avg=(float)sum/subno;
    }
    for(int i=0;i<sno;i++)
    {
        if(s[i].avg<=100 && s[i].avg>=90)
        {
            s[i].grade='A';
        }
        else if(s[i].avg<=90 && s[i].avg>=80)
        {
            s[i].grade='B';
        }
        else if(s[i].avg<=80 && s[i].avg>=70)
        {
            s[i].grade='C';
        }
        else if(s[i].avg<=70 && s[i].avg>=60)
        {
            s[i].grade='D';
        }
        else if(s[i].avg<=60 && s[i].avg>=35)
        {
            s[i].grade='E';
        }
        else
        {
            s[i].grade='F';
        }
    }
label1:    printf("-----Display Menu-----\n");
    printf("1. All student details\n");
    printf("2. Particular student details\n");
    int ch;
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                printf("%-10s%-15s","RollNo","Name");
                for(int i=0;i<subno;i++)
                {
                    printf("%-10s",subject[i]);
                }
                printf("%-10s%-5s\n","Average","Grade");
                for(int i=0;i<sno;i++)
                {
                    printf("%-10d%-15s",s[i].rolno,s[i].name);
                    for(int j=0;j<subno;j++)
                    {
                        printf("%-10d",marks[i][j]);
                    }
                    printf("%-10g%-5c\n",s[i].avg,s[i].grade);
                }
                break;
        case 2:
                printf("-----Menu for Particular student-----\n");
                printf("1. Name\n");
                printf("2. Roll no.\n");
                printf("Enter your choice : ");
                int ch1,flag=0;
                scanf("%d",&ch1);
                switch(ch1)
                {
                    case 1:
                            {
                                char name[20];
                                printf("Enter the name of the student : ");
                                scanf(" %[^\n]",name);
                                for(int i=0;i<sno;i++)
                                {
                                    if(strstr(name,s[i].name)!=NULL)
                                    {
                                        if(flag==0)
                                        {
                                            printf("%-10s%-15s","RollNo","Name");
                                            for(int i=0;i<subno;i++)
                                            {
                                                printf("%-10s",subject[i]);
                                            }
                                            printf("%-10s%-5s\n","Average","Grade");
                                        }
                                        flag=1;
                                        printf("%-10d%-15s",s[i].rolno,s[i].name);
                                        for(int k=0;k<subno;k++)
                                        {
                                            printf("%-10d",marks[i][k]);
                                        }
                                        printf("%-10g%-5c\n",s[i].avg,s[i].grade);
                                    }
                                }
                            }
                            break;
                    case 2:
                            {
                                int rolno;
                                printf("Enter the Rollno of the student : ");
                                scanf("%d",&rolno);
                                for(int i=0;i<sno;i++)
                                {
                                    if(rolno==s[i].rolno)
                                    {
                                        if(flag==0)
                                        {
                                            printf("%-10s%-15s","RollNo","Name");
                                            for(int i=0;i<subno;i++)
                                            {
                                                printf("%-10s",subject[i]);
                                            }
                                            printf("%-10s%-5s\n","Average","Grade");
                                        }
                                        flag=1;
                                        printf("%-10d%-15s",s[i].rolno,s[i].name);
                                        for(int k=0;k<subno;k++)
                                        {
                                            printf("%-10d",marks[i][k]);
                                        }
                                        printf("%-10g%-5c\n",s[i].avg,s[i].grade);
                                    }
                                }
                            }
                            break;
                    default:printf("Enter valid choice\n");
                }
                break;
        default:printf("Invalid Choice\n");
    }
label2:    printf("Do you want to continue to display(Y/y) : " );
            char ch1;
            scanf(" %c",&ch1);
            if(ch1=='Y' || ch1=='y')
            {
                goto label1;
            }
            else if(ch1=='N' || ch1=='n')
            {
                return 0;
            }
            else
            {
                printf("Enter valid option\n");
                goto label2;
            }
}
    