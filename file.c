#include<stdio.h>
#include<string.h>
struct data
{
    char name[20];
    char id[20];

    char sub[20];
};
int main()
{
    char a[20];            
    FILE *fp;
    int i=0,count=0;
    struct data student;
    int m=0,n=0,j=0;
   fp=fopen("tt.txt","r");
   if(fp!=NULL)
   {
       fscanf(fp,"%s",a);
       

   }
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==',')
       {
count=count+1;
       }
       if(count==0 && a[i]!=',')
       {
student.name[m]=a[i];
m=m+1;
       }
       if(count==1 &&a[i]!=',')
       {
student.id[n]=a[i];
n=n+1;
       }
       if(count==2 &&a[i]!=',')
       {
student.sub[j]=a[i];
j=j+1;
       }
   }
   printf("%s\n%s\n%s\n",student.id,student.name,student.sub);
   return 0;

}