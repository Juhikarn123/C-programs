Problem Statement:
Write a program to accept a number which denotes the color code and print Red if it is 1, Blue if it is 2, Green if it is 3, White if it is 4, Pink it is 5. For any other value print Invalid input.

Input:
Integer

Output:
Red/Blue/Green/White/Pink/Invalid input

Constraints
None

Sample Input 1
1

Sample Output 1
Red

Sample Input 2
10

Sample Output 2
Invalid input

------------------------------------------------------
  #include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    switch(number)
    {
        case 1:printf("Red");
        break;
        case 2:printf("Blue");
        break;
        case 3:printf("Green");
        break;
        case 4:printf("White");
        break;
        case 5:printf("pink");
        break;
        default:printf("Invalid input");
    }
}
