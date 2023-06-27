Write a program to accept a float value as input from the user and print it rounded off to 3 decimal places.

Input:
Float

Output:
Float

Sample Input 1
123.456789

Sample Output 1
123.457

Sample Input 2
99.100000

Sample Output 2
99.100
-----------------------------------
  #include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    printf("%.3f",a);
}
