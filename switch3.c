Problem Statement:
Write a program to accept a number which denotes the month and print the corresponding name of the month.

Input:
Integer

Output:
January/February/March/April/May/June/July/August/September/October/November/December/Invalid input

Constraints
None

Sample Input 1
1

Sample Output 1
January

Sample Input 2
13

Sample Output 2
Invalid input
-------------------------------------
  #include<stdio.h>
int main()
{
    int month;
    scanf("%d",&month);
    switch(month)
    {
        case 1:printf("January");
        break;
        case 2:printf("February");
        break;
        case 3:printf("March");
        break;
        case 4:printf("April");
        break;
        case 5:printf("May");
        break;
        case 6:printf("June");
        break;
        case 7:printf("July");
        break;
        case 8:printf("August");
        break;
        case 9:printf("September");
        break;
        case 10:printf("October");
        break;
        case 11:printf("November");
        break;
        case 12:printf("December");
        break;
        default:printf("Invalid input");
    }
}
