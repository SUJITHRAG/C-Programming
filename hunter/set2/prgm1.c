#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char a[100],temp;
int i,j,k,l;
scanf("%s",a);
l=strlen(a);
for(i=0,j=0;j<l;j++){

    if((a[j]==' ') ||( j==l-1))
    {
            if(j<l-1)
            {
                k=j-1;
            }
            else{
                    k=j;
                }
while(i<k)
{
    temp=a[i];
   a[i]=a[k];
   a[k]=temp;
    i++;
    k--;
}
i=j+1;
    }
}
printf("%s",a);
return 0;
}
