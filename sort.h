#include <stdlib.h> 
#include <time.h>  
void Print(int* a, int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void Random(int* a, int n)
{
	srand (time(NULL));
	for(int i=0;i<n;i++)
		a[i] = rand()%10+1;
}

void Merge(int* a, int left, int mid, int right)
{
	int temp1[mid - left +1];
	int temp2[right - mid];
	int index_a = left;

	for(int i = 0; i< mid - left+1;i++)
		temp1[i] = a[index_a++];
	for(int i = 0; i< right-mid; i++)
		temp2[i] = a[index_a++];

	int index_temp1 = 0; int index_temp2 = 0;

	index_a = left;

	while(index_temp1 <= mid - left && index_temp2 < right - mid)
	{
		if(temp1[index_temp1]<temp2[index_temp2])
		{
			a[index_a] = temp1 [index_temp1];
			index_temp1++;
		}
		else
		{
			a[index_a] = temp2[index_temp2];
			index_temp2++;
		}
		index_a++;
	}
	while(index_temp1 <= mid -left)
	{
		a[index_a] = temp1[index_temp1];
		index_a++;
		index_temp1++;
	}
	while(index_temp2 < right - mid)
	{
		a[index_a] = temp2[index_temp2];
		index_a++;
		index_temp1++;
	}
}
 
/* thuat toan sap xep tron*/
void MergeSort(int* a, int left, int right) {
    //xuat(a, l, r);
   int mid = (right + left)/2;
    if(left<right) 
    {
        MergeSort(a, left, mid);
        MergeSort(a, mid + 1, right);
        Merge(a, left, mid, right);
    }
}
