#include<stdio.h>

void Min(int *a, int n)
{
	int k, i;
	printf("请输入k值:");
	scanf("%d", &k);
	int min = a[0];
	if (k <= n && k > 0)
	{
		for (i = 0; i < k; ++i)
		{
			if (min > a[i])
			{
				min = a[i];
			}
		}
		printf("数组中前%d个最小的数字是%d\n", k, min);
	}
	else if (k > n)
	{
		printf("k应小于等于%d\n", n);
	}
	else
		printf("k应大于0\n");
}

void main()
{
	int a[] = { 2, 4, 5, 8, 1, 3, 7, 6, 0, 12, 53, 54 };
	int n = sizeof(a) / sizeof(a[0]);
	Min(a, n);
}