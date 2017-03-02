#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int main()
{
int x,y,s;
printf("enter two nubers to be added\n");
scanf("%d%d",&x,&y);
s=add(x,y);
printf("sum of two numbers is%d \n",s);
}
