Lycheral Number

Problem Statement:

Write a program to accept a number as input, check if it is a Lycheral number and print Yes or No.

A Lychrel number is a natural integer which does not end the iterative process: while a number is not a palindrome, add the number to its mirror (created by reversing the order of its digits) in order to obtain a new number.

Add a number to the value of its mirror (the order of its digits are reversed) to obtain a new number. If this number is a new palindrome, stop, else start again with this number.

Examples:

 360 + 063 = 423

423 + 324 = 747

196 : 

196 + 691 = 887
887 + 788 = 1675
1675 + 5761 = 7436
7436 + 6347 = 13783
13783 + 38731 = 52514
....
16403234045 + 54043230461
70446464506 + 60546464407
it never ends... hence 196 is lychrel number

Input Format:
Given two integers . first is the number to be checked and second is the maximum number of iterations

Output Format:
Print Yes or No

Constraints
1<=num<=10^10

Sample Input 1:

196 20

Sample Output 1:

Yes

Sample Input 2:

56 5

Sample Output 2: 

No
  ----------------------------------------------
  #include<stdio.h>
long long reverse(long long n)
{
    long long reversenum=0;
    while(n>0)
    {
     reversenum=reversenum*10+n%10;
     n=n/10;
    }
    return reversenum;
}

int palindrome(long long n)
{
    long long reversenum=reverse(n);
    return(n==reversenum);
}

int main()
{
    long long n;
    int max;
    scanf("%lld %d",&n,&max);
    int ite=0;
    while(ite<max)
    {
        long long reversenum=reverse(n);
        n+=reversenum;
        if(palindrome(n))
        {
            printf("No\n");
            return 0;
        }
        ite++;
    }
    printf("Yes\n");
    return 0;
    
}
