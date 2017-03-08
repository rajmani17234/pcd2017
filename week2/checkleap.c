#include<stdio.h>
int isleap(int yr)
{
if(yr%400==0)
{
return 0;
}
else if(yr%100==0)
{
return 1;
}
else if(yr%4==0)
{
return 2;
}
else
{
return -1;
}
}
int main()
{
int year,r;
printf("enter the year to be checked for leap year\n");
scanf("%d",&year);
r=isleap(year);
switch(r)
{
case 0:
printf("it is an quadranal leap year\n");
break;
case 1:
printf("it is an centuary leap year\n");
break;
case 2:
printf("it is an leap year\n");
break;
case -1:
printf("it is not an leap year\n");
default:
break;
}
return 0;
}


