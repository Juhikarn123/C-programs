Temperature Conversion

Write a program to accept a number as input from the user which denotes the temperature in Celsius, convert it to Fahrenheit reading and print it

Input:
Float

Output:
Float

Sample Input 1
100

Sample Output 1
212.00

Sample Input 2
0

Sample Output 2
32.00
----------------------------------------
  #include<stdio.h>
int main()
{
    float c,f;
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%.2f",f);
}
