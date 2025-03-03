/*Documentiation
  Sai Chandu
  27-01-24
  sample input:
  sample output:
            Size of int : 4 bytes
            Size of char : 1 byte
            Size of float : 4 bytes
            Size of double : 8 bytes
            Size of unsigned int : 4 bytes
            Size of long int : 8 bytes
  Description:to define a macro SIZEOF(x), without using sizeof operator
*/  
#include<stdio.h>
#define SIZEOF(NUM) (char *)(&NUM+1)-(char *)&NUM
int main()
{
    int num;
    printf("Size of int : %ld bytes\n",SIZEOF(num));
    char ch;;
    printf("Size of char : %ld bytes\n",SIZEOF(ch));
    float f;
    printf("Size of float : %ld bytes\n",SIZEOF(f));
    double d;
    printf("Size of double : %ld bytes\n",SIZEOF(d));
    unsigned int num1;
    printf("Size of unsigned int : %ld bytes\n",SIZEOF(num1));
    long num2;
    printf("Size of long int : %ld bytes\n",SIZEOF(num2));
}