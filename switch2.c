Problem Statement:
Write a program to accept a number which denotes the day of the week and print the corresponding day. Day of the week starts at 1 for Sunday.

Input:
Integer

Output:
Sunday/Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Invalid input

Constraints
None

Sample Input 1
1

Sample Output 1
Sunday

Sample Input 2
10

Sample Output 2
Invalid input
-----------------------------------------------
  #include<stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("Sunday");
        break;
        case 2:printf("Monday");
        break;
        case 3:printf("Tuesday");
        break;
        case 4:printf("Wednesday");
        break;
        case 5:printf("Thursday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("Saturday");
        break;
        default:printf("Invalid input");
    }
}
