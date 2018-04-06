#include<iostream>
#define N 10
int main()
{
	int arr[N] = { 1,4,6,2,3,9,12,2,4,5 };
	int key, i, j;
	for (j = 1; j < N; j++)
	{
		key = arr[j];									// 保存当前位置的值
		for (i = j - 1; i > 0 && arr[i] > key; i--)		// 从前一个开始寻找，直到遇到不大于自己的
			arr[i + 1] = arr[i];						// 后面的等于前面的（向后移位）
		arr[i + 1] = key;								// 给正确的位置赋值
	}
	for (i = 0; i < N; i++)
		std::cout << arr[i] << "  ";
	return 0;
}