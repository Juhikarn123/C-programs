Accept a number as input and print it with 3 decimal digits

Write a program to accept a number as input from the user and print it with 3 decimal digits.

Input:
Float

Output:
Float

Sample Input 1
123.456

Sample Output 1
123.456

Sample Input 2
123.4567

Sample Output 2
123.4577

-----------------------------------------------
  #include<stdio.h>
int main()
{
    float j;
    scanf("%f",&j);
    printf("%f",j);
}
