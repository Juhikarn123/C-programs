Sorted and rotated

Given an array of N distinct integers. the task is to write a program to check if this array is sorted and rotated. A sorted array is not considered as sorted and rotated , i.e there should at least one rotation.

Input format:

    The first line has an integer N denotes the size of the array.

    The second line contains N values separated by space.

Constraints;

 1 <= N <= 100

 1 <= arr[i] <= 10^6

Output Format:

    print Yes/No

Sample Input :

6

5 6 1 2 3 4

Sample Output :

Yes
  --------------------------------------------
  #include<stdio.h>
int sort(int arr[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,min;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[min])
        {
            min=i;
        }
    }
    if(sort(arr,n))
    {
        printf("No\n");
    }
    else
    {
        int rotateArr[n];
        int j=0;
        for(i=min;i<n;i++)
        {
            rotateArr[j++]=arr[i];
        }
        for(i=0;i<min;i++)
        {
            rotateArr[j++]=arr[i];
        }
        if(sort(rotateArr,n))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
}
