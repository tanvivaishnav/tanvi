#include<stdio.h>
void main()
{
int a,b,c;
printf("\n\t Enter Number a : ");
scanf("%d",&a);
printf("\n\t Enter Number b : ");
scanf("%d",&b);
printf("\n\t Enter Number c : ");
scanf("%d",&c);

if(a>b)
{
if(a>c)
{
printf("\n\t a is greatest number.");
}
else
{
printf("\n\t c is greatest number.");
}
}
else 
{
if(b>c)
{
printf("\n\t b is greatest number.");
}
else
{
printf("\n\t c is greatest number.");
}
}
}
