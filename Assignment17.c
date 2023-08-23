The games developer, "GamingFun", has secided to develop a word game. In the first round, the game screen will display multiple words. The length of the starting word of the next round will be equal to the last word of the previous round. To design the game, the developers need to know the length of the last word in the previous round

Write an algorithm to find the length of the last word of the previous round of the game

Input
The input consists of a string with space separated words displayed on the game screen

Output
Print an integer value representing the length of the last word of the previous round

Example
Input
I am a genius developer

Output
9

Explanation
The last word in the input is developer whose length is 9. Hence the output is 9
----------------------------------------------------
  #include<stdio.h>
#include<string.h>
int main()
{
    char input[1000];
    fgets(input,sizeof(input),stdin);
    int l=strlen(input);
    if(l>0 && input[l-1]=='\n')
    {
        input[l-1]='\0';
    }
    char *token=strtok(input," ");
    char *last_word=NULL;
    while(token!=NULL)
    {
        last_word=token;
        token=strtok(NULL," ");
    }
    int l_length=(last_word!=NULL)?strlen(last_word):0;
    printf("%d",l_length);
}
