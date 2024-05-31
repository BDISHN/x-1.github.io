#include<stdio.h>

void bubble_sort(int arr[],int length)
{
	
    // 跑多少趟
    for (int i = 0; i < length-1; i++)
    {
        for (int j = 0; j <length-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
}
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int length=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,length);
    for (int k = 0; k< 10; k++)
    {
        printf("%d\r\n ",arr[k]);
    }
    return 0;
}

