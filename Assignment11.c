Frequency Of Element

Problem statement

Write a program to count the frequency of element in the array

Input Format:

The first line contains the number of elements.

Second line has the array elements.

 

Constraints:

1 <= n <= 100

0 <= arr[i] <= 10^18

Output Format:

Print the number and Frequency of that number separate them by COLON

Sample Input:

27

8 6 8 3 6 3 8 2 6 3 10 1 8 7 7 1 10 6 1 1 7 1 2 7 7 3 7

Sample Output:

8:4

6:4

3:4

2:2

10:2

1:5

7:6
  ---------------------------------------
  #include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f[n];
    int v=-1;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                f[j]=v;
            }
        }
        
    
        if(f[i]!=v)
        {
            f[i]=c;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(f[i]!=v)
        {
            printf("%d:%d\n",arr[i],f[i]);
        }
    }
    return 0;
}
