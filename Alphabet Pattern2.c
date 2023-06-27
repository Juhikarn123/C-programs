Alphabet Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
A
BC
DEF
GHIJ
KLMNO

Sample input 2
4

Sample output 2
A
BC
DEF
GHIJ
--------------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,row;
    char ch='A';
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch++);
            
        }
        printf("\n");
    }
}
