Write a program to accept a message as input from the user and print it four times each in a different line.

Input:
String

Output:
String

Constraints:
1>=length of string<=100

Sample Input 1
Hello

Sample Output 1
Hello
Hello
Hello
Hello

Sample Input 2
Hello World

Sample Output 2
Hello World
Hello World
Hello World
Hello World

------------------------------------------------------

  #include<stdio.h>
int main()
{
    char name[200],i;
    gets(name);
    for(i=1;i<5;i++)
    printf("%s\n",name);
    
}
