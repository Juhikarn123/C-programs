Assessment - 01 (05-07-2023)
Completion requirements
 Description
 Edit
 Submission view
 Available from: Wednesday, 5 July 2023, 10:00 AM
 Due date: Wednesday, 5 July 2023, 12:00 PM
 Maximum number of files: 1
Type of work:  Individual work
Write a program to print the smallest and the largest Fibonacci number in the given series.

For example:

The array is:1,2,3,4,5,6,7

The smallest fibonacci is 1 and the largest fibonacci number is this sequence is 5. Hence the output is 1 & 5

Explanation:

The array contains 4 fibonacci values 1,2,3 and 5

Hence, the maximum is 5 and the minimum is 1.

Input Format:

First line has the size of the array.

Second line has the array elements.

Constraints:

1 <= N <= 10000

1 <= arr[i] <= 100000

Output Format:

Print the smallest first then the largest number delimit them by space.

Sample Input:

7

1 2 3 4 5 6 7

Sample Output:

1 5
  -----------------------------------------
  #include<stdio.h>
int fibo(int n)
{
    int num1=0,num2=1,num3;
    while(num2<n)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;
    }
    return (num2==n);
}

int main()
{
    int size,min=-1,max=-1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(fibo(arr[i]))
        {
            if(min==-1 || arr[i]<min )
            {
                min=arr[i];
            }
            if(max==-1 || arr[i]>max )
            {
                max=arr[i];
            }
        }
    }
    printf("%d %d",min,max);
}
