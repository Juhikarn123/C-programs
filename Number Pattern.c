Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
1
12
123
1234
12345

Sample input 2
4

Sample output 2
1
12
123
1234
--------------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,row;
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
            
        }
        printf("\n");
    }
    
}
