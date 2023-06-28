Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
54321
4321
321
21
1

Sample input 2
4

Sample output 2
4321
321
21
1

------------------------
  #include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
