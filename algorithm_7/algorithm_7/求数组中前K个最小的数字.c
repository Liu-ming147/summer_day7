#include<stdio.h>

void Min(int *a, int n)
{
	int k, i;
	printf("������kֵ:");
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
		printf("������ǰ%d����С��������%d\n", k, min);
	}
	else if (k > n)
	{
		printf("kӦС�ڵ���%d\n", n);
	}
	else
		printf("kӦ����0\n");
}

void main()
{
	int a[] = { 2, 4, 5, 8, 1, 3, 7, 6, 0, 12, 53, 54 };
	int n = sizeof(a) / sizeof(a[0]);
	Min(a, n);
}