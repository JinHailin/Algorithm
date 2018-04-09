// 暴力求解最大子数组问题
#include<stdio.h>
int main()
{
	// 每日价格变化的数组
	int a[] = { 13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7 };
	int index[2];
	int max = a[0];
	int n = sizeof(a) / sizeof(int);
	int temp;
	for (int i = 0; i < n; i++)
	{
		temp = 0;
		for (int j = i; j < n; j++)
		{
			temp += a[j];
			if (temp > max)
			{
				index[0] = i;
				index[1] = j;
				max = temp;
			}
		}
	}
	printf("%d %d %d", index[0], index[1], max);
	return 0;
}