Greater of 2

Problem Statement:

Write a program to accept 2 numbers as input and print the greater of the 2 numbers.
You may assume that the numbers will not be equal.

Input:
Integer

Output:
Integer

Constraints
1<=num<=2,147,483,647

Sample Input 1
6789 6790

Sample Output 1
6790

Sample Input 2
0 1

Sample Output 2
1
----------------------------------------------
  #include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}
