#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char encode(char a)
{
    int num=(int)a;
    num=num+1;
    char b=(char)num;
    return b;
}
int main()
{
    char str1[50],str2[50],str3[50];
    printf("\nENTER THE SENTENCE TO ENCODE:");
    gets(str1);
    int len=strlen(str1);
    int j=0;
    for(int i=0;i!='\0';i++)
    {
        str2[i]=(char)((int)str1[i]+1);
        // str2[i]=encode(str1[i]);
    }
    puts(str2);
    return 0;
}