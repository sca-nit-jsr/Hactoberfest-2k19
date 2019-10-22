void insertionSort(List a)
{
	var i,j,t;
	for(i=1;i<a.length;i++)
	{
		t=a[i];
		for(j=i-1;j>=0&&t<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=t;
	}
	for(i=0;i<a.length;i++)
		print("${a[i]}");
}