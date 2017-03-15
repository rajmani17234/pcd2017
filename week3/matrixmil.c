#include<stdio.h>
void read_arr(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("Enter Element [%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
            }
    }
}

void mul_arr(int m1[10][10],int m2[10][10],int m3[10][10],int m,int n)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    m3[i][j]=0;
    for (k=0;k<m;k++)
    {
    m3[i][j] = m3[i][j] + (m1[i][k] * m2[k][j]);
    }
    }
    }
}

void print_arr(int m4[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
            printf("%d ",m4[i][j]);
         }
        printf("\n");
        }
}

 int main()
{
    int m1[10][10],m2[10][10],m3[10][10],m,n;
   printf("Enter the number of rows and columns\n");
    printf("Enter number of rows :");
    scanf("%d",&m);
    printf("Enter number of colomns :");
    scanf("%d",&n);
    read_arr(m1,m,n);
    read_arr(m2,m,n);
    mul_arr(m1,m2,m3,m,n);

    print_arr(m3,m,n);
    return 0;
}

