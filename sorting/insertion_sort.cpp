#include<iostream>
#define N 10
int main()
{
	int arr[N] = { 1,4,6,2,3,9,12,2,4,5 };
	int key, i, j;
	for (j = 1; j < N; j++)
	{
		key = arr[j];									// ���浱ǰλ�õ�ֵ
		for (i = j - 1; i > 0 && arr[i] > key; i--)		// ��ǰһ����ʼѰ�ң�ֱ�������������Լ���
			arr[i + 1] = arr[i];						// ����ĵ���ǰ��ģ������λ��
		arr[i + 1] = key;								// ����ȷ��λ�ø�ֵ
	}
	for (i = 0; i < N; i++)
		std::cout << arr[i] << "  ";
	return 0;
}