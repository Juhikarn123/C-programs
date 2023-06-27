Problem Statement:

Write a program to accept 2 numbers as input and check if they are equal or not.

Input:
Integer Integer

Output:
Equal or Not Equal

Constraints
1<=num<=2,147,483,647

Sample Input 1
6789 6789

Sample Output 1
Equal

Sample Input 2
0 1

Sample Output 2
Not Equal
--------------------------------------------
  #include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("Equal");
        
    }
    else
    {
        printf("Not Equal");
    }
}
