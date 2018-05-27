#include<stdio.h>
int main(void)
{
int num,i,k;
scanf("%d",&num);
int a[20];
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
    for(k=i+1;k<num;k++)
{
if(a[i]==a[k])
printf("%d ",a[i]);
}
} 
return 0;
}
