Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
1
22
333
4444
55555

Sample input 2
4

Sample output 2
1
22
333
4444
---------------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
