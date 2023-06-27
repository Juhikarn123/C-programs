Number Sequencing

Problem Statement:

Write a program to accept 3 numbers as input and sequence them in the ascending order.
You may assume that the numbers will not be equal.

Input:
Integer Integer Integer

Output:
Integer<Integer<Integer

Constraints
1<=num<=2,147,483,647

Sample Input 1
6789 6790 6788

Sample Output 1
6788<6789<6790

Sample Input 2
0 1 2

Sample Output 2
0<1<2

  --------------------------------------
  #include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3)
    {
        if(num2>=num3)
        {
            printf("%d<%d<%d",num3,num2,num1);
        }
        else
        {
          printf("%d<%d<%d",num2,num3,num1);  
        }
    }
  else  if(num2>=num1 && num2>=num3)
    {
        if(num1>=num3)
        {
            printf("%d<%d<%d",num3,num1,num2);
        }
        else
        {
          printf("%d<%d<%d",num1,num3,num2);  
        }
    }
    
   else
    {
        if(num2>=num1)
        {
            printf("%d<%d<%d",num1,num2,num3);
        }
        else
        {
          printf("%d<%d<%d",num2,num1,num3);  
        }
    }
}
