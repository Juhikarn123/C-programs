Write a program to accept a float value input. Print it with a width of 15 and rounded off to 2 decimal places.

Input:
Float

Output:
Float

Sample Input 1
123.4567

Sample Output 1
123.46

Sample Input 2
20.3333333

Sample Output 2
          20.33

---------------------------------------------
  #include<stdio.h>
int main()
{
    float f;
    scanf("%f",&f);
    printf("%.2f",f);
}
