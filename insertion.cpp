#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    int a[50],n,i,j,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	for(j=2;j<=n;j++)
	{
	   temp=a[j];
	   i=j-1;
		while(i>0 && a[i]>temp)
		{
		    swap(a[i+1],a[i]);
			i--;
		}
     }
     for(i=1;i<=n;i++)
	   printf("%d ",a[i]);
}