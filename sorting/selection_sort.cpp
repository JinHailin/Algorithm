#include<iostream>
#define N 10
int main()
{
	int arr[N] = { 1,4,6,2,3,9,12,2,4,5 };
	for (int i = 0, min; i < N - 1; i++)
	{
		min = i;
		for (int j = i; j < N; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	for (int i = 0; i < N; i++)
		std::cout << arr[i] << " ";
	return 0;

}
