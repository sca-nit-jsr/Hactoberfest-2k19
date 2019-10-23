#include<stdio.h>

void insertionSort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=a[i];
		for(j=i-1;j>=0&&t<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=t;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
