Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
5
44
333
2222
11111

Sample input 2
4

Sample output 2
4
33
222
1111
-----------------------------------
  #include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
