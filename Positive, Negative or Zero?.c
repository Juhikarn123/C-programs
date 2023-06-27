Positive, Negative or Zero?

Problem Statement:

Write a program to accept a number as input and check if it is positive, negative or zero.

Input:
Integer

Output:
Positive, Negative or Zero

Constraints
1<=num<=2,147,483,647

Sample Input 1
6789

Sample Output 1
Positive

Sample Input 2
0

Sample Output 2
Zero

--------------------------------------------
  #include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive");
        
    }
    if(a<0)
    {
        printf("Negative");
        
    }
    if(a==0)
    {
        printf("Zero");
        
    }
}
