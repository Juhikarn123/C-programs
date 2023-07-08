Assessment - 01 (08-07-2023)
Completion requirements
 Description
 Edit
 Submission view
 Available from: Saturday, 8 July 2023, 10:00 AM
 Due date: Saturday, 8 July 2023, 12:00 PM
 Maximum number of files: 1
Type of work:  Individual work
Happy Number

Problem Statement:

Write a program to accept a number as input, check if it is a Happy number and print Yes or No.

Happy Number : 

A number is called happy if it leads to 1 after a sequence of steps wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1. 

Examples : 

Input: n = 19
Output: True
19 is Happy Number,
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
As we reached to 1, 19 is a Happy Number.
Note : The only single digit happy numbers are 1 and 7. All other single digits are not happy numbers

Input Format:
Given an integer

Output Format:
Print Yes if it is a happy number or No

Constraints
1<=num<=10^12

Sample Input 1:

19

Sample Output 1:

Yes

Sample Input 2:

5

Sample Output 2:

No
  ----------------------------
  #include<stdio.h>
int happy(int n)
{
    int r=0,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r);
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int result=n;
    while(result !=1 && result!=4)
    {
        result=happy(result);
    }
    if(result==1)
    {
        printf("Yes");
    }
    else if(result==4)
    {
        printf("No");
    }
}
