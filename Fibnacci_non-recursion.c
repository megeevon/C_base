#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fib(int m)
{
	if (m == 1 || m == 2)
		return 1;
	int a = 1, b = 1, Q = 0;
	while (m >= 2)
	{
		Q = Q + a;//��Q���ɴ�ŵ��������ֵ�����
		a = b;
		b = Q;
		m--;
	}
	return Q;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}
