#include<stdio.h>
int sum(int a,int b,int c)
{
return a+b+c;
}
int main()
{
int x,y,z,s;
printf("Enter three numbers  to be added\n");
scanf("%d%d%d",&x,&y,&z);
s=sum(x,y,z);
printf("Sum of three numbers is  %d\n",s);
}

