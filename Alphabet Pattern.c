Alphabet Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
A
AB
ABC
ABCD
ABCDE

Sample input 2
4

Sample output 2
A
AB
ABC
ABCD
-----------------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}
