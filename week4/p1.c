#include<stdio.h>
#include<math.h>
unsigned int shift(unsigned int x,unsigned int n)
{
int i;
for(i=0;i<n;i++)
{
if(x%2==0)
{
x=x>>1;
}
else
{
x=x>>1;
x=x+pow(2,31);
}
}
return x;
}
int main()
{
unsigned int a,b,result;
printf("Enter the number to be rotated\n");
scanf("%u",&a);
printf("Enter the number of times to be rotated\n");
scanf("%u",&b);
result=shift(a,b);
printf("The number rotated by %u times is %u\n",b,result); 
return 0;
}


