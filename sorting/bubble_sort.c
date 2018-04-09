#include<stdio.h>
#define N 10
int main()
{
	int temp;
	int arr[N] = { 5,2,4,7,1,9,3,2,6,0 };
	for (int i = 0; i < N - 1; i++)			// 判断N-1次
	{
		for (int j = N - 1; j > i; j--)		// 从最后一个开始查找
		{
			if (arr[j] < arr[j - 1])		// 与前一个比较
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}									// 每次将i正确归位
	}
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}