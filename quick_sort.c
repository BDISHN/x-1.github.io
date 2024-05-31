void quick_sort(int *arr,int l,int h)
{
	int tmp = *(arr+low);
	int low =l,high=h;
	if(low>=high) return;
	while(low<high)
	{
		if(*(arr+low)>*(arr+high))
		{
			*(arr+low)=*(arr+high);
			low++;
		}
		else
		{
			*(arr+high)=*(arr+low);
			high--;
		}
		*(arr+low)=tmp;
		quick_sort(arr,l+1,high-1);
		quick_sort(arr,low+1,h);
	}
}