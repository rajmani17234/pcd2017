#include<stdio.h>
struct complex
{
float real;
float img;
};
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
int main()
{
struct complex a,b,c;
printf("Enter the real value of a=\n");
scanf("%f",&a.real);
printf("Enter the imaginary part of a=\n");
scanf("%f",&a.img);
printf("Enter the real part of b=\n");
scanf("%f",&b.real);
printf("Enter the imaginary  part of b=\n");
scanf("%f",&b.img);
c=add(a,b);
printf("Sum of two complex numbers is %f+i%f\n",c.real,c.img);
}

