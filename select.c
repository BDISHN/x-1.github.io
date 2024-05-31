



for(int i=0;i<size-1;i++)
{
	int k=i;
	for(int j=i+1;j<size;j++)
	{
		if(a[j]<a[k])
			k=j;
	}
	if(i != k)
	{
		int tmp;
		tmp=a[i];
		a[i]=a[k];
		a[k]=tmp;
	}
}