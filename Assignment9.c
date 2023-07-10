Ugly Number

Problem Statement:

Write a program to accept a number as input, check if it is an ugly number and print either Yes or No.

An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5

Input Format:
Given an integer

Output Format:
Print Yes or No

Constraints
1<=num<=10^12

Sample Input 1:

6

Sample Output 1:

Yes

Sample Input 2:

14

Sample Output 2:

No
  ------------------------------------------------------------------------
  #include<stdio.h>
#include<string.h>
int main()
{
  int n,c=0;
  scanf("%d",&n);
 while(n!=1)
 {
     if(n%5==0)
     {
         n/=5;
     }
     else if(n%3==0)
     {
         n/=3;
     }
     else if(n%2==0)
     {
         n/=2;
     }
     else
     {
         printf("No\n");
         c=1;
         break;
     }
 }
 if(c==0)
 {
     printf("Yes\n");
 }
}
