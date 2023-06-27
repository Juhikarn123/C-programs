Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
12345
2345
345
45
5

Sample input 2
4

Sample output 2
1234
234
34
4
------------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
