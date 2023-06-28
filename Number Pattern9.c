Number Pattern

Write a program to accept a number N as input from the user and print the following pattern.

Sample input 1
5

Sample output 1
12345
4321
123
21
1

Sample input 2
4

Sample output 2
4321
123
21
1
-------------------------------------------
  #include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        if(i%2==1)
        k=1;
        else 
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            if(i%2==1)
            k++;
            else
            k--;
        }
        printf("\n");
        
    }
}
