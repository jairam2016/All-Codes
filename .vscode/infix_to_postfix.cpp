#include<bits/stdc++.h>      // MODIFICATION REQUIRED NOT ABLE TO FIGURE OUT
using namespace std;
struct stk
{
    int size;
    int top;
    char *arr;
};
void push(struct stk *sp,char ch)
{
    sp->top++;
    sp->arr[sp->top]=ch;
}
char pop(struct stk *sp)
{
    char ch=sp->arr[sp->top];
    sp->top--;
    return ch;
}
int isEmpty(struct stk *sp)
{
    return sp->top;
}
int priority(char ch)
{
    if(ch=='*' || ch=='/')
    {
        return 5;
    }
    if(ch=='+' || ch=='-')
    {
        return 3;
    }
}
char stacktop(struct stk *sp)
{
    return sp->arr[sp->top];
}
int main()
{
    struct stk *sp=(struct stk*)malloc(sizeof(struct stk));
    sp->size=40;
    sp->top=-1;
    sp->arr=(char*)malloc(sizeof(char)*sp->size);
    string str="(a-b/c)";
    int i=0;
    char x;
    int len=str.length();
    // str[len]='\0';
    while(str.at(i)!='\0')
    {
        char ch=str.at(i);
        if(isalnum((ch)))
        {
            cout<<ch;
        }
        if(ch=='(')
        {
            push(sp,ch);
        }
        if(str[i]==')')
        {
            while(x=pop(sp)!='(')
            {
                cout<<x;
            }
        }
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            if(priority(stacktop(sp)) > priority(ch))
            {
                x=pop(sp);
                cout<<x;
            }
            push(sp,ch);
        }
        i++;
    }
    while(isEmpty(sp)!=-1)
    {
        x=pop(sp);
        cout<<x;
    }
    return 0;
}