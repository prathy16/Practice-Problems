#include<stdio.h>
#define MAX 1000000000
int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int G, I, N, Q, r, i;
		scanf("%d", &G);
		for(r = 0; r<G; r++)
		{
			scanf("%d%d%d", &I, &N, &Q);
			int arr[MAX] = {I};
			int hcount=0, tcount=0, k;
			if(N%2 == 0) k = N/2;
			if(N%2==1)   k = (N+1)/2;
			if(I == 1)
			{
			   hcount = N-k;
			   tcount = k;
			}
			else
			{
			   tcount = N-k;
			   hcount = k;
			}
			
			if(Q == 1) 
			   printf("%d\n", hcount);
			else 
			   printf("%d\n", tcount);
		}
	}
	return 0;
} 
