Given a function char *compressString(char* str); The function accepts a string as an argument that may contain repetitive characters. Implement the function to modify and return the input string, such that each character once, along with the count of consecutive occurrence. Do not append count if the character occurs only once.

Constraint :
The string will only contain lowercase English Alphabets If you have to manipulate the input string in place you cant use another string Assumption – No character will occur consecutively more than 9 times.

Input :
A string input as specified with length of 100 characters.

Output :
Character along with the count of occurence.

Example 1:
Input
aaaaabbbccccccccdaa
Output
a5b3c8da2

Example 2:
Input
aaadddsssgggvvvvxxxnnnmmm
Output
a3d3s3g3v4x3n3m3

---------------------------------------------------------------
  #include<stdio.h>
#include<string.h>
char* compressString(char* str)
{
    int len=strlen(str);
    int index=0;
    
    for(int i=0;i<len;i++)
    {
        int count=1;
        while(i<len-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        str[index++]=str[i];
        if(count>1 && count<=9)
        {
            str[index++]=count+'0';
        }
    }
    str[index]='\0';
    return str;
}
int main()
{
    char input[101];
    scanf("%100s",input);
    compressString(input);
    printf("%s",input);
    return 0;
}
