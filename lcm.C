#include<stdio.h>
int main()
{
int no1,no2,i,gcd,lcm;
printf("enter the 2 numbers:");
scanf("%d %d",&no1,&no2);
for(i=1;i<=no1&&i<=no2;i++)
{
if(no1%i==0 && no2%i==0)
{
gcd=i;
}
}
lcm=(no1*no2)/gcd;
printf("the lcm of 2 numbers is %d",lcm);
return 0;
}
