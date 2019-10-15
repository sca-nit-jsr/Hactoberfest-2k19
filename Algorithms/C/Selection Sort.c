#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter the array size\n");
	scanf("%d",&size);
	int ar[size],log,tem,min,i,j;
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<size;i++)
	{
		min=ar[i];
		log=i;
		for(j=i+1;j<size;j++)
		{
			if(ar[j]<min)	//USE < for ascending and > for descending 
			{
				min=ar[j];
				log=j;
			}
		}
	tem=ar[i];
	ar[i]=ar[log];
	ar[log]=tem;
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",ar[i]);
		
	}
}
