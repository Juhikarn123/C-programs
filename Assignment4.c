Assessment - 02 (07-07-2023)
Completion requirements
 Description
 Submission view
 Available from: Friday, 7 July 2023, 10:00 AM
 Due date: Friday, 7 July 2023, 12:00 PM
 Maximum number of files: 1
Type of work:  Individual work
Sum of digits till single digit

Problem Statement:

Find the sum of digits of a number till the sum is single digit.

Input Format:

    Given an integer

Output Format:

    Print the final answer


Constraints
1<=num<=10^10

Sample Input 1: 

897

Sample Output 1 :

6

Explanation: 897 -> 8+9+7 -> 24

                  24 -> 2+4 -> 6

Sample Input 2:

9999999999

Sample Output 2:

9
  ---------------------------------------------------------
  #include<stdio.h>
int main()
{
    int sum=0;
    long int n;
    scanf("%ld",&n);
    while(n>0 || sum>=10)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    printf("%d",sum);
}
