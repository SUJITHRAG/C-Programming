#include <stdio.h>
int main(void)
{
	int i,num;
	scanf("%d",&num);
	int a[num];
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	for(i=0;i<num;i++)
	{
		if(i%2==0&&a[i]%2!=0)
		printf("%d",a[i]);
		else if(i%2!=0&&a[i]%2==0)
		printf("%d",a[i]);
	}
	return 0;
}
