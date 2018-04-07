// 求两个二进制数组相加的结果
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
		c[i + 1] = (a[i] + b[i] + carry) % 2;		// 求当前数字
		carry = carry + a[i] + b[i] < 2 ? 0 : 1;	// 求进位	
	}
	c[0] = carry == 1 ? 1 : 0;
	for (int i = 0; i < N + 1; i++)
		std::cout << c[i];
	return 0;
}