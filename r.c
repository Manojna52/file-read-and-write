#include<stdio.h>
int main()
{
    char a[20]="hello i am";
    char b[20];
    strncpy(b,a);
    printf("%s",b);
    return 0;
}