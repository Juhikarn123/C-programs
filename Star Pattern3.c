Star Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
*
**
***
****
*****

Sample input 2
4

Sample output 2
*
**
***
****
-----------------------------------------
#include<stdio.h>
int main()
{
    int i,j,r;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
