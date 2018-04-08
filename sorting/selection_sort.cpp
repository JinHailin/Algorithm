#include<iostream>
#define N 10
int main()
{
	int arr[N] = { 1,4,6,2,3,9,12,2,4,5 };
	for (int i = 0, min; i < N - 1; i++)
	{
		min = i;				// 寻找最小值的下标
		for (int j = i; j < N; j++)
		{
			if (arr[j] < arr[min])		// 遍历、比较
				min = j;
		}
		int temp = arr[i];			// 与min进行交换
		arr[i] = arr[min];
		arr[min] = temp;
	}
	for (int i = 0; i < N; i++)
		std::cout << arr[i] << " ";
	return 0;
}
