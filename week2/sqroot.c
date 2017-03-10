#include<stdio.h>
#include<math.h>
float sqroot( int n)
{
float r1,r2,diff;
r1=n/2.0;
r2=n/r1;
diff=fabs(r1-r2);
while(diff>0)
{
r1=(r1+r2)/2.0;
r2=n/r1;
diff=fabs(r1-r2);
}
return r1;
}
int main()
{
float num,l;
printf("Enter the number to find square root of  a number\n");
scanf("%f",&num);
l=sqroot(num);
printf("The square root of the number entered is %f",l);
return 0;
}

