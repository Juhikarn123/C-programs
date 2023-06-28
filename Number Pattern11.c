Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
1
10
101
1010
10101

Sample input 2
4

Sample output 2
1
10
101
1010
--------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
         printf("\n");
    }
   
    
}
