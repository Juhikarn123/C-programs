system can be called a binary string.

You are required to implement the following function:
int OperationsBinaryString(char *str);

The function accepts a string 'str' as its argument. The string 'str' consists of binary digits separated with an alphabet as follows:

• 'A' denotes AND operation
• 'B' denotes OR operation
• 'C' denotes XOR operation

You are required to calculate the result of the string 'str', scanning the string left to right, taking one operation at a time, and return the same.

Note:
• No order of priorities of operations is required.
• Length of 'str' is odd
• If 'str' is NULL or None(in case python) return -1

Example:
Input:
str : 1COC1C1A0B1
Output:
1
Explanation:
The alphabets in 'str' when expanded becomes "1 XOR 0 XOR 1 XOR I AND 0 OR 1" result of the expression becomes 1, hence 1 is returned.

Input
str: 0C1A1B1C1C1B0A0
Output
0
--------------------------------------------------------------
  #include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int result =str[0]-'0';
    int i;
    for(i=1;i<strlen(str);i+=2)
    {
        char operation =str[i];
        int nextdigit=str[i+1]-'0';
        if(operation=='A')
        {
            result &=nextdigit;
        }
        else if(operation=='B')
        {
            result |=nextdigit;
        }
        else if(operation=='C')
        {
            result ^=nextdigit;
        }
    }
    printf("%d",result);
}
