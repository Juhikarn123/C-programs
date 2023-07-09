196 - Algorithm

Problem Statement:

Write a program to implement 196 - Algorithm

196 Algo : Take any positive integer of two digits or more, reverse the digits, and add to the original number. This is the operation of the reverse-then-add sequence. Now repeat the procedure with the sum so obtained until a palindromic number is obtained. This procedure quickly produces palindromic numbers for most integers. For example, starting with the number 5280 produces the sequence 

5280 + 0825 =>   6105

6105 + 5016 =>  11121

11121+12111 =>  23232. 

Input Format:

Given an integer

Output Format:
Print the palindrome number


Constraints
1<=num<=10^10

Sample Input 1:

15

Sample Output 1:

66

Sample Input 2:

149

Sample Output 2:

1991
  ----------------------------------------------------------
  #include<stdio.h>

long long reverse(long long n)
{
    long long reversedigit=0;
    while(n>0)
    {
        reversedigit=reversedigit*10+n%10;
        n/=10;
    }
    return reversedigit;
}

int palindrome(long long n)
{
    long long reversedigit=reverse(n);
    return (n==reversedigit);
}
int main()
{
    long long n;
    scanf("%lld",&n);
    while(!palindrome(n))
    {
        long long reversedigit=reverse(n);
        n+=reversedigit;
    }
    printf("%lld\n",n);
    return 0;
}
