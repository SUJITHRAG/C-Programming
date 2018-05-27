#include <stdio.h>
int main(void)
{
  int n,a[100],i,k,t,j;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=1;i<=n;i++)
  {
  	scanf("%d ",&a[i]);
  }
  for(i=1;i<=n-1;i++)
  {
  	for(j=i+1;j<=n;j++)
  	{
  		if(a[i]<a[j])
  		{
  			t=a[i];
  			a[i]=a[j];
  			a[j]=t;
  		}
  	}
  }
  for(i=1;i<=n;i++)
 	{
		if(i==k)
  	{
      printf("%d ",a[i]);
    }
  }
  return 0;
  }
