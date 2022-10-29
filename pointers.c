#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[60];
    printf("\nENTER THE STRING :");
    gets(str);
    int len=strlen(str);
    char *ch=str;
    for(int i=0;i<len;i=i+2)
    {
        if(str[i] != ' ')
        {
            printf("%c  ",*ch);
        }
        ch=ch+2;
    }
}