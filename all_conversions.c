#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int hexa_to_decimal(char str[10],int base1)
{
    int sum=0;
    int c=0;
    int i=0;
       for(int i=strlen(str)-1;i>=0;i--)
        {
            if(str[i]=='0')
            {
                sum=sum+ 0*(pow(16,c));
            }
            if(str[i]=='1')
            {
                sum=sum+ 1*(pow(16,c));
            }
            if(str[i]=='2')
            {
                sum=sum+ 2*(pow(16,c++));
            }
            if(str[i]=='3')
            {
                sum=sum+ 3*(pow(16,c));
            }
            if(str[i]=='4')
            {
                sum=sum+ 4*(pow(16,c));
            }
            if(str[i]=='5')
            {
                sum=sum+ 5*(pow(16,c));
            }
            if(str[i]=='6')
            {
                sum=sum+ 6*(pow(16,c));
            }
            if(str[i]=='7')
            {
                sum=sum+ 7*(pow(16,c));
            }
            if(str[i]=='8')
            {
                sum=sum+ 8*(pow(16,c));
            }
            if(str[i]=='9')
            {
                sum=sum+ 9*(pow(16,c));
            }
            if(str[i]=='A')
            {
                sum=sum+ 10*(pow(16,c));
            }
            if(str[i]=='B')
            {
                sum=sum+ 11*(pow(16,c));
            }
            if(str[i]=='C')
            {
                sum=sum+ 12*(pow(16,c));
            }
            if(str[i]=='D')
            {
                sum=sum+ 13*(pow(16,c));
            }
            if(str[i]=='E')
            {
                sum=sum+ 14*(pow(16,c));
            }
            if(str[i]=='F')
            {
                sum=sum+ 15*(pow(16,c));
            }
            c=c+1;
        }
        return sum;
}
int number_conversion(int num,int base1)
{
    int sum=0;
    int temp=0;
    int rem=0;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+ rem*pow(base1,temp);
        temp++;
    }
    return sum;
}
void deci_to_hexa(int num,int base1)
{
    char one[10];
    int c=0;
    while(num>0)
        {
            int rem=num%16;
            if(rem==10)
            {
                one[c++]='A';
            }
            else if(rem==11)
            {
                one[c++]='B';
            }
            else if(rem==12)
            {
                one[c++]='C';
            }
            else if(rem==13)
            {
                one[c++]='D';
            }
            else if(rem==14)
            {
                one[c++]='E';
            }
            else if(rem==15)
            {
                one[c++]='F';
            }
            else
            {
                one[c++]=rem;
            }
            num=num/16;
        }
        one[c]='\0';
        for(int i=c-1;i>=0;i--)
        {
            if(one[i]>=65 && one[i]<=91)
                printf("%c",one[i]);
            else
            {
                printf("%d",one[i]);
            }
        }
}
void deci_to_octal(int num,int base2)
{
    char one[10];
    int c=0;
     while(num>0)
        {
            int rem=num%8;
            one[c++]=rem;
            num=num/8;
        }
        one[c]='\0';
        for(int i=c-1;i>=0;i--)
        {
            printf("%d",one[i]);
        }
}
void main()
{
    long num,base1,base2;
    printf("\nENTER THE BASE OF THE NUMBER ENTERED (2,8,10,16):");
    scanf("%d",&base1);
    printf("\nENTER THE BASE YOU WANT TO CONVERT THE NUMBER (2,8,10,16): ");
    scanf("%d",&base2);
    if(!((base1==16 && base2==2) || (base1==2 && base2==16) || (base1==16 && base2==10) || (base1==16 && base2==8)))
    {
        printf("\nENTER THE NUMBER YOU WANT TO FOR CONVERSION:");
        scanf("%d",&num);
    }
    char one[10];
    long result=0;
    int c=0;
    // FROM DECIMAL TO BINARY CONVERSION
    if(base1==10 && base2==2)
    {
        while(num>0)
        {
            int rem=num%2;
            one[c++]=rem;
            num=num/2;
        }
        one[c]='\0';
        for(int i=c-1;i>=0;i--)
        {
            printf("%d",one[i]);
        }
    }

    // FROM DECIMAL TO OCTAL CONVERSION
    if(base1==10 && base2==8)
    {
       deci_to_octal(num,base2);
    }

    // FROM DECIMAL TO HEXADECIMAL CONVERSION
    if(base1==10 && base2==16)
    {
        deci_to_hexa(num,base1);
    }

    // BINARY TO OCTAL CONVERSION
    if(base1==2 && base2==8)
    {
        int c=0;
        while(num>0)
        {
            int rem1=num%10;
            num=num/10;
            int rem2=num%10;
            num=num/10;
            int rem3=num%10;
            num=num/10;
            int sum=(rem3*100) + (rem2*10) + rem1;
            if(sum==000)
            {
                one[c++]='0';
            }
            if(sum==001)
            {
                one[c++]='1';
            }
            if(sum==010)
            {
                one[c++]='2';
            }
            if(sum==011)
            {
                one[c++]='3';
            }
            if(sum==100)
            {
                one[c++]='4';
            }
            if(sum==101)
            {
                one[c++]='5';
            }
            if(sum==110)
            {
                one[c++]='6';
            }
            if(sum==111)
            {
                one[c++]='7';
            }
        }

        one[c]='\0';
        for(int k=c-1;k>=0;k--)
        {
            printf("%c",one[k]);
        }
    }

    // BINARY TO HEXADECIMAL CONVERSION
    if(base1==2 && base2==16)
    {
        int c=0;
        while(num>0)
        {
            int rem1=num%10;
            num=num/10;
            int rem2=num%10;
            num=num/10;
            int rem3=num%10;
            num=num/10;
            int rem4=num%10;
            num=num/10;
            int sum=(rem4*1000) + (rem3*100) + (rem2*10) + rem1;
            if(sum==000)
            {
                one[c++]='0';
            }
            if(sum==001)
            {
                one[c++]='1';
            }
            if(sum==010)
            {
                one[c++]='2';
            }
            if(sum==011)
            {
                one[c++]='3';
            }
            if(sum==100)
            {
                one[c++]='4';
            }
            if(sum==101)
            {
                one[c++]='5';
            }
            if(sum==110)
            {
                one[c++]='6';
            }
            if(sum==111)
            {
                one[c++]='7';
            }
            if(sum==1000)
            {
                one[c++]='8';
            }
            if(sum==1001)
            {
                one[c++]='9';
            }
            if(sum==1010)
            {
                one[c++]='A';
            }
            if(sum==1011)
            {
                one[c++]='B';
            }
            if(sum==1100)
            {
                one[c++]='C';
            }
            if(sum==1101)
            {
                one[c++]='D';
            }
            if(sum==1110)
            {
                one[c++]='E';
            }
            if(sum==1111)
            {
                one[c++]='F';
            } 
        }  
        one[c]='\0';
        for(int i=c-1;i>=0;i--)
        {
                printf("%c",one[i]);
        }     
    }          

    // BINARY TO DECIMAL
    if(base1==2 && base2==10)
    {
        int sum=number_conversion(num,base1);
        printf("%d",sum);
    }

    // OCTAL TO DECIMAL
    if(base1==8 && base2==10)
    {
        int sum=number_conversion(num,base1);
        printf("%d",sum);
    }

    // OCTAL TO BINARY
    if(base1==8 && base2==2)
    {
        int print[]={000,001,010,011,100,101,110,111};
        int element[]={0,1,2,3,4,5,6,7};
        int c=0;
        while(num>0)
        {
            one[c++]=num%10;
            num=num/10;
        }
        one[c]='\0';
        for(int i=c-1;i>=0;i--)
        {
            if(one[i]==0)
            {
                printf(" 000 ");
            }
            if(one[i]==1)
            {
                printf(" 001 ");
            }
            if(one[i]==2)
            {
                printf(" 010 ");
            }
            if(one[i]==3)
            {
                printf(" 011 ");
            }
            if(one[i]==4)
            {
                printf(" 100 ");
            }
            if(one[i]==5)
            {
                printf(" 101 ");
            }
            if(one[i]==6)
            {
                printf(" 110 ");
            }
            if(one[i]==7)
            {
                printf(" 111 ");
            }
        }
    }

    // OCTAL TO HEXADECIMAL
    if(base1==8 && base2==16)
    {
        int sum=number_conversion(num,base1);
        deci_to_hexa(sum,base2);
    }

    //HEXADECIMAL TO DECIMAL
    if(base1==16 && base2==10)
    {
        char str[10];
        int sum=0;
        int c=0;
        printf("\nENTER THE NUMBER ");
        scanf("%s",str);
        sum=hexa_to_decimal(str,base1);
        printf("%d",sum);
    }

    // HEXADECIMAL TO BINARY
    if(base1==16 && base2==2)
    {
        char str[8];
        printf("\nENTER THE NUMBER: ");
        scanf("%s",str);
        int c=0;
        int i=0;
        while(str[i]!='\0')
        {
            one[c++]=str[i++];
        }
        one[c]='\0';
        for(int i=0;i<=c-1;i++)
        {
            if(one[i]=='0')
            {
                printf(" 000 ");
            }
            if(one[i]=='1')
            {
                printf(" 001 ");
            }
            if(one[i]=='2')
            {
                printf(" 010 ");
            }
            if(one[i]=='3')
            {
                printf(" 011 ");
            }
            if(one[i]=='4')
            {
                printf(" 100 ");
            }
            if(one[i]=='5')
            {
                printf(" 101 ");
            }
            if(one[i]=='6')
            {
                printf(" 110 ");
            }
            if(one[i]=='7')
            {
                printf(" 111 ");
            }
            if(one[i]=='8')
            {
                printf(" 1000 ");
            }
            if(one[i]=='9')
            {
                printf(" 1001 ");
            }
            if(one[i]=='A')
            {
                printf(" 1010 ");
            }
            if(one[i]=='B')
            {
                printf(" 1011 ");
            }
            if(one[i]=='C')
            {
                printf(" 1100 ");
            }
            if(one[i]=='D')
            {
                printf(" 1101 ");
            }
            if(one[i]=='E')
            {
                printf(" 1110 ");
            }
            if(one[i]=='F')
            {
                printf(" 1111 ");
            }
        }
    }

    // HEXADECIMAL TO OCTAL
    if(base1==16 && base2==8)
    {
        char str[10];
        int sum=0;
        int c=0;
        printf("\nENTER THE NUMBER ");
        scanf("%s",str);
        sum=hexa_to_decimal(str,base1);
        deci_to_octal(sum,base2);
    }
}
