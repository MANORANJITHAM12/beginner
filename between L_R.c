#include<stdio.h>
int main()
{
int K,L,R,i,count=0;
scanf("%d%d"&L,&R);
for(i=L;i<R;i++)
{
if(N==i)
{
count=1;
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
