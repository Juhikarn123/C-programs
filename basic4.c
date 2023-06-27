Accept a message as input and print it

Write a program to accept a message as input from the user and print it

Input:
String

Output:
String

Constraint:
1>=length of string<=100

Sample Input 1
Hello

Sample Output 1
Hello

Sample Input 2
Hello World

Sample Output 2
Hello World

----------------------------------------------------------------
  #include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    printf("%s",str);
}
