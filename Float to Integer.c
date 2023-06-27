Float to Integer

Write a program to accept a float value as input from the user and print its closest integer value.

Input:
Float

Output:
Integer

Sample Input 1
25.345

Sample Output 1
25

Sample Input 2
99.023

Sample Output 2
99

------------------------------------
  #include<stdio.h>
#include<math.h>
int main()
{
    float a;
    scanf("%f",&a);
    printf("%.f",round(a));
}
