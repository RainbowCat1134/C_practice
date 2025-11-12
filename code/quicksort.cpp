#include <iostream>
using namespace std;

void QuickSort(int left, int right, int *num, int n)
{
	if(left >= right)
		return;
	
	int i = left;
	int j = right;
	int mid = (left + right) / 2;
	int p = num[mid];
	
	while(i <= j)
	{
		while(num[i] < p) 
			i++;
		while(num[j] > p)
			j--;
		if(i <= j)
		{
			swap(num[i], num[j]);
			i++;
			j--;
		}
	} 
	if(left < j)
		QuickSort(left , j , num , n);
	if(right > i)
		QuickSort(i , right , num , n);
} 

int main(void)
{
	int n,i;
	
	cin >> n;
	
	int num[n];
	
	for(i = 0;i < n;++i)
		cin >> num[i];
	
	QuickSort(0 , n - 1 , num , n);
	
	for(i = 0;i < n;++i)
		cout << num[i] << " ";
	
	return 0;
}


