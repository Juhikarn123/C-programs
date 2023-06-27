Triangle or Not

Problem Statement: 

Write a program to accept 3 numbers that represent the sides of a triangle. Check if they can form a triangle or not.

Input:
Integer

Output:
Yes or No

Constraints
None

Sample Input 1
7 10 5

Sample Output 1
Yes

Sample Input 2
0 1 2

Sample Output 2
No
---------------------------------------------------------
  #include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==0 || b==0 ||c==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
