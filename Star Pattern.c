Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
*****
*****
*****
*****
*****

Sample input 2
4

Sample output 2
****
****
****
****

--------------------------------------------
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
