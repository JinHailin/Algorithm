// ������������������ӵĽ��
#include<iostream>
#define N 5
int main()
{
	int a[N] = { 1,1,1,1,1 };
	int b[N] = { 1,1,1,1,1 };
	int c[N + 1];
	int carry = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		c[i + 1] = (a[i] + b[i] + carry) % 2;		// ��ǰ����
		carry = carry + a[i] + b[i] < 2 ? 0 : 1;	// ���λ	
	}
	c[0] = carry == 1 ? 1 : 0;
	for (int i = 0; i < N + 1; i++)
		std::cout << c[i];
	return 0;
}