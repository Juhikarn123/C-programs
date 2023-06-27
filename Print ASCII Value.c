Write a program to accept a character as input from the user and print its corresponding ASCII value.

Input:
char

Output:
Integer

Sample Input 1
A

Sample Output 1
65

Sample Input 2
Z

Sample Output 2
90
  ----------------------------------------------
  #include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%d",ch);
}
