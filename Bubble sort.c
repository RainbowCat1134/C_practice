#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(void)
{
	int num[N];
	int i,j,tmp,cnt;
	
	cnt = 0;
	
	srand(time(NULL));
	
	for(i = 0;i < N;i++)
		num[i] = rand();
	
	for(i = 0;i < N;i++)
	{
		printf("%d\t",num[i]);
		cnt++;
		if(cnt % 5 == 0)
			printf("\n");
	}


	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N-1;j++)
		{
			if(num[j] > num[j+1])
			{
				tmp = num[j+1];
				num[j+1] = num[j];
				num[j] = tmp;
			}
	 	}
	}

	printf("\n");
	cnt = 0;
	
	for(i = 0;i < N;i++)
	{
		printf("%d\t",num[i]);
		cnt++;
		if(cnt % 5 == 0)
			printf("\n");
	}

		
	return 0;
}
