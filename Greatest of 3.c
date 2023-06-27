Greatest of 3

Problem Statement:

Write a program to accept 3 numbers as input and print the greatest of the 3 numbers.
You may assume that the numbers will not be equal.

Input:
Integer Integer Integer

Output:
Integer

Constraints
1<=num<=2,147,483,647

Sample Input 1
6789 6790 6788

Sample Output 1
6790

Sample Input 2
0 1 2

Sample Output 2
2
  ----------------------------------------------
  #include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
       
    }
    else if(b>c)
    {
        printf("%d",b);
    }
    else
    printf("%d",c);
}
