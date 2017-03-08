#include<stdio.h>
int prime(int n)
{
int i;
for(i=1;i<=n;i++)
{
if((n%i==0)&&(n%n==0)&&(n%1==0))
{
return 1;
}
else
{  
return 0;
}
}
}
int main()
{
int num,x;
printf("Enter the number to check prime..\n");
scanf("%d",&num);
x=prime(num);
switch(x)
{
case 1:
printf("It is not an prime number\n");
break;






case 0:
printf("It is  an prime number\n");
break ;
default :
break;
}
return 0;
}

