Problem Statement:
Write a program to accept a number which denotes the marks of a student,
print the grade based on the following criteria:
1. Marks >= 35 = Pass,
2. Marks < 35 = Fail

Input:
Float

Output:
Pass or Fail

Constraints
0<marks<=100

Sample Input 1
90

Sample Output 1
Pass

Sample Input 2
10

Sample Output 2
Fail

-------------------------------------------------
  #include<stdio.h>
int main()
{
    float mark;
    scanf("%f",&mark);
    if(mark>=35)
    {
        printf("Pass");
    }
    else if(mark<35)
    {
        printf("Fail");
    }
}
