void selectionSort(List a)
{
	int i,j,t;
	for(i=0;i<a.length;i++)
	{
    int min = i;
		for(j=i+1;j<a.length;j++)
		{
			if(a[min]>a[j])
				min = j;
		}
    t = a[min];
    a[min] = a[i];
    a[i] = t;
	}
	for(i=0;i<a.length;i++)
		print("${a[i]} ");
}