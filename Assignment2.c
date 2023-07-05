Assessment - 02 (05-07-2023)
Completion requirements
 Description
 Edit
 Submission view
 Available from: Wednesday, 5 July 2023, 10:00 AM
 Due date: Wednesday, 5 July 2023, 12:00 PM
 Maximum number of files: 1
Type of work:  Individual work
Circular Prime 

Problem Statement

Write a program to check whether a given number is circular prime or not

Note: a number is said to be a circular prime if all its possible rotations are also prime numbers

Example:

113 is circular prime, since 311 and 131 are also prime

Input Format

 Input contains an integer

Output Format

 Print CIRCULAR PRIME or NOT CIRCULAR PRIME

 

Sample Input :

 3119

Sample output :

CIRCULAR PRIME

Sample Input 2:

56465

Sample Output 2:

NOT CIRCULAR PRIME
  ----------------------------------------------------------------------------------------
  #include<stdio.h>
int prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int number,temp,rotation[10],digit=0;
    scanf("%d",&number);
    temp=number;
    while(temp>0)
    {
        rotation[digit]=temp;
        temp/=10;
        digit++;
    }
    int circularPrime=1;
    for(int i=0;i<digit;i++)
    {
        if(!prime(rotation[i]))
        {
            circularPrime=0;
            break;
        }
        int last_digit=rotation[i]%10;
        rotation[i]=(rotation[i]/10)+(last_digit*100000);
    }
    if(circularPrime)
    {
        printf("CIRCULAR PRIME\n");
    }
    else
    {
        printf("NOT CIRCULAR PRIME\n");
    }
    return 0;
}
