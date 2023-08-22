You are given a function,
int FindSecondLargestNumber(int num1,int num2,int num3);
The function takes three integers ‘num1’, ‘num2’,’num3’ as input.
Implement the function to find and return the second largest number.

Example

Input
10 49 18

Output
18
  -----------------------------------------------
  #include<stdio.h>
int FindSecondLargestNumber(int num1,int num2,int num3)
{
    if((num1>=num2 && num1<=num3)||(num1>=num3 && num1<=num2))
    {
        return num1;
    }
    else if((num2>=num1 && num2<=num3)||(num2>=num3 && num2<=num1))
    {
        return num2;
    }
    else
    {
        return num3;
    }
}
    int main()
    {
        int num1,num2,num3;
        scanf("%d %d %d",&num1,&num2,&num3);
        int secondLargest=FindSecondLargestNumber(num1,num2,num3);
        printf("%d",secondLargest);
        return 0;
    }
