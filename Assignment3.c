Assessment - 01 (07-07-2023)
Completion requirements
 Description
 Submission view
 Available from: Friday, 7 July 2023, 10:00 AM
 Due date: Friday, 7 July 2023, 12:00 PM
 Maximum number of files: 1
Type of work:  Individual work
Swap Alternate Digits

Problem Statement:

Write a program to accept a number and swap its alternate digits. Print the number generated.

Input:
Given an integer

Output:
Altered number

Constraints
1<=num<=10^15

Sample Input 1:

12345678

Sample Output 1:

21436587

Sample Input 2:

56473

Sample Output 2:

65743
  -----------------------------------------------------------
  #include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n+1];
    sprintf(a,"%d",n);
    for(int i=0;i<strlen(a)-1;i+=2)
    {
        char temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<strlen(a);i++)
    printf("%c",a[i]);
    return 0;
    
}
