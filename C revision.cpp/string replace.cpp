#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define null

using namespace std;

int input(char []);
int breaks(char [],char [],char []);
int display(char []);
int deletes(char [],char []);

int main()
{
    int t,i,j;
    char a[100],b[100],c[100];
    input(a);
    cout<<"Enter the word to be replaced\t: ";
    gets(b);
    cout<<"Enter the word to be replaced with :\t";
    gets(c);
    breaks(a,b,c);
    display(a);
    return 0;
}
int input(char *c)
{
    int i;
    cout<<"Enter string:\t\t";
    gets(c);
    return 0;
}
int breaks(char  *a,char  *b,char  *c)
{
    char *ptr;
    ptr=strstr(a,b);
    cout<<&ptr<<endl;
    char **p=&ptr;
    a=a+**p;
    strcpy(a,c);
    deletes(a,b);
    return 0;
}
int display(char *a)
{
    puts(a);
}
int deletes(char *a,char *b)
{
    int k=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(strcmp(a,b)==0)
        {
            for(int j=i;j<strlen(b);j++)
                strcpy(a[j],a[j+1]);
                k++;
        }
    }
    return 0;
}
