Assessment - 02 (08-07-2023)
Completion requirements
 Description
 Edit
 Submission view
 Available from: Saturday, 8 July 2023, 10:00 AM
 Due date: Saturday, 8 July 2023, 12:00 PM
 Maximum number of files: 1
Type of work:  Individual work
Rearrange number

Problem Statement:

Write a program to accept a number and choice as input. If the choice is 0 rearrange the number such that the odd digits are ordered first followed by the even digits. If the choice is 1 rearrange the number such that the even digits are ordered first followed by the odd digits. Print the rearranged number. The order of occurrence of the digits is to be preserved

Input Format:
Given two integers are separated by space. First integer is the number and second integer is the option

Output Format:
Rearranged number

Constraints
1<=num<=10^15

Sample Input 1:

123456 0

Sample Output 1:

135246

Sample Input 2:

123456 1

Sample Output 2:

246135
  ---------------------------------------------
  #include<stdio.h>
long long rearrange(long long n,int c)
{
    int odd[20],even[20];
    int oddc=0,evenc=0;
    long long rearrangenum=0;
    
    while(n>0)
    {
        int digit=n%10;
        if(digit%2==0)
        {
            even[evenc++]=digit;
        }
        else
        {
            odd[oddc++]=digit;
        }
        n/=10;
    }
        if(c==0)
        {
            for(int i=oddc-1;i>=0;i--)
            {
             rearrangenum=rearrangenum*10+odd[i];   
            }
            for(int i=evenc-1;i>=0;i--)
            {
             rearrangenum=rearrangenum*10+even[i];   
            }
        }
        else if(c==1)
        {
            for(int i=evenc-1;i>=0;i--)
            {
             rearrangenum=rearrangenum*10+even[i];   
            }
            for(int i=oddc-1;i>=0;i--)
            {
             rearrangenum=rearrangenum*10+odd[i];   
            }
        }
        else
        {
            printf("Invalid choice.please enter 0 or 1.\n");
            return -1;
        }
        return rearrangenum;
    }
    int main()
    {
        long long n;
        int c;
        scanf("%lld %d",&n,&c);
        long long rearrangenum=rearrange(n,c);
        if(rearrangenum!=-1)
        {
            printf("%lld",rearrangenum);
        }
        return 0;
    }
