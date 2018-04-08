#include<stdio.h>
#include<stdlib.h>
void merge(int *arr, int p, int q, int r)
{
	int n1 = q - p + 1;		// 左数组长度
	int n2 = r - q;			// 右数组长度
	int *L = (int *)malloc(sizeof(int)*n1);		// 开辟空间
	int *R = (int *)malloc(sizeof(int)*n2);

	// 分别赋值
	for (int i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (int i = 0; i < n2; i++)
		R[i] = arr[q + i + 1];

	int i = 0, j = 0;

	for (int k = p; k <= r; k++)
	{
		/* 右数组为空 或者左数组不空时，左小于右的情况
		   左数组当前元素给原数组赋值 */
		if (j == n2 || i != n1&&L[i] < R[j])	
		{					
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
	}
	free(L);
	free(R);
}
void mergeSort(int *arr, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;	// 中间值
		mergeSort(arr, p, q);
		mergeSort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}
int main()
{
	int arr[10] = { 5,2,4,7,1,9,3,2,6,0 };
	mergeSort(arr, 0, 9);
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}
