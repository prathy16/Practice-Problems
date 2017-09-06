#include <stdio.h>
int func(int a[], int n, int m)
{
	if(m==0) return 1;
	if(n<0||m<0) return 0;
	return func(a, n-1, m-a[n-1])||func(a, n-1, m);
}
int main(void) {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n], i;
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		if(func(a, n, m)) 
		   printf("Yes\n");
		else 
		   printf("No\n");
	}
	return 0;
}
