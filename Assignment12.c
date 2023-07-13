Problem Statement:

Print the numbers in the range having exactly n factors

Input Format:

Given three integers the start ,end and nth value separated by SPACE.

Output Format:

Print the numbers in the given range that are having exactly n factors

Sample Input 1:

1 10 2

Sample Output 1:

2 3 5 7

Sample Input 2:

2134 3001 5

Sample Output 2:

2401
  ---------------------------------------------
  #include<stdio.h>
#include<stdbool.h>
int main()
{
    int st,en,n;
    scanf("%d %d %d",&st,&en,&n);
    for(int num=st;num<=en;num++)
    {
        int c=0;
        for(int i=1;i*i<=num;i++)
        {
            if(num%i==0)
            {
                c+=2;
                if(i*i==num)
                {
                    c--;
                }
            }
        }
        if(c==n)
        {
            printf("%d ",num);
        }
    }
    printf("\n");
    return 0;
}
