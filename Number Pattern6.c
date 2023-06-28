Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
5
45
345
2345
12345

Sample input 2
4

Sample output 2
4
34
234
1234
---------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
