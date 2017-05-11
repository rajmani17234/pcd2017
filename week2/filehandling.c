#include<stdio.h>
int main()
{
char a[100],b[100];
FILE *fp1,*fp2,*fp3;
fp1=fopen("usn.txt","r");
fp2=fopen("name.txt","r");
fp3=fopen("out.txt","w");
if(fp1==NULL)
	{
		printf("The file name usn.txt does not exist\n\n");
		return 0;
	}
else if(fp2==NULL)
	{
		printf("The file name name.txt does not exist\n\n");
		return 0;
	}
fprintf(fp3,"USN\tSTUDENT\n");
while(1)
{
fscanf(fp1,"%s",a);
fscanf(fp2,"%s",b);
if((!feof(fp1))&&(!feof(fp2)))
{
fprintf(fp3,"%s \t %s\n",a,b);
}
else
break;
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
}

