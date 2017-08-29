#include<stdio.h>
int main()
{
	int T, N, i, money;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		int a[N], temp;
		money = 0;
		for(i=0; i<N; i++)
			scanf("%d", &a[i]);
		for(i=0; i<N-1; i++)
		{
			if(a[i] == 0 && a[i+1] == 1)
			{
				money = money+100;
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
			else if(a[i]==0 && a[i+1] == 0)
			{
				money = money+1100;
			}
		}
		if(i==N-1 && a[i] == 0) money = money+1100;

		printf("%d\n", money);
	}
	return 0;
}
