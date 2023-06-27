Print Integer with a Twist

Write a program to accept 2 numbers as input from the user. Print the 2 numbers such that the second number is 17 width spaces away from the first.

Input:
Integer Integer

Output:
Integer Integer

Sample Input 1
25 35

2500000000000000035

Sample Input 2
99 100

Sample Output 2
9900000000000000100
-------------------------------
  #include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b!=0)
    printf("%d000000000000000%d",a,b);
    else
    printf("%d0000000000000000%d",a,b);
}
