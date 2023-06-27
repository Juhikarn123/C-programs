Divisible by 3?

Problem Statement:

Write a program to accept a number as input and check if it is divisible by 3. If the number is divisible by 3 print YES else print NO.

Input:
Integer

Output:
YES or NO

Constraints
1<=num<=2,147,483,647

Sample Input 1
6789

Sample Output 1
YES

Sample Input 2
2

Sample Output 2
NO
---------------------------
  #include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
