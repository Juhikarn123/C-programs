Problem Statement:
Write a program to accept a number which denotes the marks of a student,
print the grade based on the following criteria:
1. Marks >= 91 = A,
2. 76<=Marks<=90 = B,
3. 61<=Marks<=75 = C
4. Marks <=60 = D

Input:
Float

Output:
A/B/C/D

Constraints
0<marks<=100

Sample Input 1
90

Sample Output 1
B

Sample Input 2
10

Sample Output 2
D
---------------------------------
  #include<stdio.h>
int main()
{
    float mark;
    scanf("%f",&mark);
    if(mark>=91)
    {
        printf("A");
    }
    else if(mark>=76 && mark<=90)
    {
        printf("B");
    }
    else if(mark>=61 && mark<=75)
    {
        printf("C");
    }
    else if(mark<=60)
    {
        printf("D");
    }
}
