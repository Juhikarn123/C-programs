Odd or Even

Problem Statement:

Write a program to accept a number as input and print EVEN if it is an even number and
ODD if it is an odd number.

Input:
Integer

Output:
EVEN or ODD

Constraints
1<=num<=2,147,483,647

Sample Input 1
6789

Sample Output 1
ODD

Sample Input 2
2

Sample Output 2
EVEN
------------------------------------
  #include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
