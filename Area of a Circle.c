Write a program to accept a number as input from the user which denotes the radius of a circle. Calculate the area of the circle and print it.

Input:
Float

Output:
Float

Sample Input 1
15

Sample Output 1
706.725

Sample Input 2
1256.400

Sample Output 2
20
  ----------------------------------------------------
  #include<stdio.h>
int main()
{
    float r,pi=3.141,a;
    scanf("%f",&r);
    a=pi*r*r;
    printf("%.3f",a);
}
