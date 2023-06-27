Print Decimal Equivalent of Octal or Hexadecimal Value

Write a program to accept a number as input (Octal or Hexadecimal) from the user and print it decimal equivalent.

Input:
Integer

Output:
Integer

Sample Input 1
010

Sample Output 1
8

Sample Input 2
0x64

Sample Output 2
100
--------------------------------------
  #include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    printf("%d",a);
}
