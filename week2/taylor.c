#include<stdio.h>
#include<math.h>
float convert_radians(float d)
{
float rad;
rad=(3.1412/180)*d;
return rad;
}
float compute_sum(float x)
{
float term,sum,diff,prev;
int i;
term=sum=diff=x;
for(i=3;diff>0;i=i+2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}
int main()
{
float degree,x,sum;
printf("Enter the value in degrees\n");
scanf("%f",&degree);
x=convert_radians(degree);
sum=compute_sum(x);
printf("Sum %f = % f",degree,sum);
}

