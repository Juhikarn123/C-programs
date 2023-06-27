Equal or Not

Problem Statement:

Write a program to accept 2 characters as input and check if they are equal or not.

Input:
Character

Output:
Equal or Not Equal

Constraints
None

Sample Input 1
a a

Sample Output 1
Equal

Sample Input 2
a b

Sample Output 2
Not equal

--------------------------------------------------
  #include<stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a==b)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
}
