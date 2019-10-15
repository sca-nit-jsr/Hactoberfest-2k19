#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter the size of array.\n");
	scanf("%d",&size);
	int ar[size],i,j,log;
	printf("Enter the numbers.\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<(size-i)-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				log=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=log;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",ar[i]);
	}
}
