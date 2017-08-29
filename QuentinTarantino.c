#include<stdio.h>
int tarantino(int ch[], int N)
{
	int k, j, count = 0;
	for(k=0; k<N-1; k++)
		if(ch[k]+1 == ch[k+1])
			count++;
	if(count == N-1)
		return -1;

	for(k=0; k<N-1; k++)
		for(j=k+1; j<N; j++)
			if(ch[j] == ch[k])
				goto jump;

	count = 0;
	for(k = 0; k<N; k++)
		count = count+ch[k];
	if(count == ((N*(N+1))/2))
		return 1;
	else
		return -1;
	jump:
		return -1;

}
int main()
{
	int T, N, i, res;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		int ch[N];
		for(i=0; i<N; i++)
			scanf("%d", &ch[i]);
		res = tarantino(ch, N);
		if(res == 1) printf("yes\n");
		else if(res == -1) printf("no\n");
	}
	return 0;
}
