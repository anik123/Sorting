#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    int a[50],n,i,j,temp,small;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		small=i;
		for(j=i+1;j<=n;j++)
		{
			if(a[j]<a[small])
				small=j;
		}
		
		swap(a[i],a[small]);
		
	}	
     for(i=1;i<=n;i++)
	   printf("%d ",a[i]);
}