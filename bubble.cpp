#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    int a[50],n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
	          swap(a[i],a[j]);
			}
		}
	}
   for(i=1;i<=n;i++)
	   printf("%d ",a[i]);
}