Write a program to accept a float value and an integer as input. The integer represents the precision. Print the float value according to the precision.

Input:
Float, Integer

Output:
Float

Sample Input 1
123.4567 2

Sample Output 1
123.46

Sample Input 2
20.3333333 3

Sample Output 2
20.333
---------------------------------------------
  #include<stdio.h>
int main()
{
    float f;
    int i;
    scanf("%f %d",&f,&i);
    printf("%.*f",i,f);
}
