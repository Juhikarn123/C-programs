N-base notation is a system for writing numbers which uses only n different symbols, This symbols are the first n symbols from the given notation list(Including the symbol for o) Decimal to n base notation are (0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A,11:B and so on upto 35:Z)

Implement the following function

Char* DectoNBase(int n, int num):

The function accept positive integer n and num Implement the function to calculate the n-base equivalent of num and return the same as a string

Assumption:

1 < n < = 36

Example

Input

n: 12

num: 718

Output

4BA

Explanation

num Divisor quotient remainder

718 12 59 10(A)

59 12 4 11(B)

4 12 0 4(4)

Sample Input

n: 21

num: 5678

Sample Output

CI8
----------------------------------------------------------
  #include<stdio.h>
int main()
{
    int str[100];
    int n,num;
    scanf("%d %d",&n,&num);
    int ind=0,i,rem;
    while(num>0)
    {
        rem=num%n;
        if(rem<=9)
        str[ind++]=rem+48;
        else
        str[ind++]=rem+55;
        num=num/n;
    }
    for(i=ind-1;i>=0;i--)
    printf("%c",str[i]);
}
