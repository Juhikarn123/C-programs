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
----------------------------------------
#include<stdio.h>
int main()
{
    int i,j,k,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<row;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
