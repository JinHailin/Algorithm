#include<stdio.h>
#include<stdlib.h>
void merge(int *arr, int p, int q, int r)
{
	int n1 = q - p + 1;		// �����鳤��
	int n2 = r - q;			// �����鳤��
	int *L = (int *)malloc(sizeof(int)*n1);		// ���ٿռ�
	int *R = (int *)malloc(sizeof(int)*n2);

	// �ֱ�ֵ
	for (int i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (int i = 0; i < n2; i++)
		R[i] = arr[q + i + 1];

	int i = 0, j = 0;

	for (int k = p; k <= r; k++)
	{
		if (j == n2 || i != n1&&L[i] < R[j])	// ������Ϊ�� ���������鲻��ʱ��
		{										// ��С���ҵ���� ������Ԫ�ظ����鸳ֵ
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
		int q = (p + r) / 2;	// �м�ֵ
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