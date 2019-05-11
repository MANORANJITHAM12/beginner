#include<stdio.h>
int main()
{
int input,i,count=0;
scanf("%d",&input);
for(i=2;i<input;i++)
{
if(input%i==0)
{
count=1;
}
}
if(count==1)
{
print("yes");
}
else
{
printf("no");
}
return 0;
}
