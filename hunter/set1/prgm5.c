#include<stdio.h>
int main(void)
{
int n,a[100],i,j,t,count=0;
scanf("\n%d",&n);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]); 
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if((a[i]==a[j])&&(count==0))
        {
            printf("\n%d",a[i]);
            count++;
        }
    }
}
return 0;
}
