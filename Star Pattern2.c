Star Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
*****
*    *
*    *
*    *
*****

Sample input 2
4

Sample output 2
****
*   *
*   *
****
--------------------------------------------------------
#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i>0 && i<r-1 && j>0 && j<r-1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
