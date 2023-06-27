Character Equivalent of ASCII Value

Write a program to accept an integer as input from the user representing an ASCII value and print its character equivalent.

Input:
Integer

Output:
Character

Sample Input 1
65

Sample Output 1
A

Sample Input 2
90

Sample Output 2
Z

------------------------------------------------------
  #include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char x=a;
    
    printf("%c",x);
}
