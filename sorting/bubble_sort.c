#include<stdio.h>
#define N 10
int main()
{
	int temp;
	int arr[N] = { 5,2,4,7,1,9,3,2,6,0 };
	for (int i = 0; i < N - 1; i++)			// �ж�N-1��
	{
		for (int j = N - 1; j > i; j--)		// �����һ����ʼ����
		{
			if (arr[j] < arr[j - 1])		// ��ǰһ���Ƚ�
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}									// ÿ�ν�i��ȷ��λ
	}
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}