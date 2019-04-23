#include<stdio.h>
int main()
{
char c;
printf("enter a character\n")
scanf("%c",&c);
if((c>='A'&&c<='Z')\\(c>='a'&&c<='z'))
{
if(c=='a'\\c=='e'\\c=='i'\\c=='o'\\c=='u')
{
printf("given character is vowel");
}
else
{
printf("given character is consonant");
}
}
else
{
printf("invalid input");
}
return 0;
}
