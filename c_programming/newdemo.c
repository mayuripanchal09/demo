#include<stdio.h>

int main()
{
    char ch='A';
    char *p=&ch;
    char **q=&p;
    char **x=&p;
    char *y=&ch;

    printf("%d",&ch);
    printf("%d",p);
    printf("%d",&p);
    printf("%d",&q);
    printf("%c",**x);
    printf("%c",**q);
    printf("%d",*q);

    return 0;

}